#include <stdio.h>

/* Struct do cabecalho do arquivo, SEM o tipo "BM" (12 bytes) */
typedef struct {
    int tamanho;           // total de bytes do arquivo
    char reservado1[2];    // uso futuro (sempre 0) (espaco reservado para o futuro)
    char reservado2[2];    // uso futuro (sempre 0) (espaco reservado para o futuro)
    int offsetpixels;      // onde os pixels comecam
} Cab_bmp;

/* Struct do cabecalho da imagem (40 bytes) */
typedef struct {
    int tamanho;           // tamanho deste cabecalho (40)
    int largura;           //largura em pixels
    int altura;            //altura em pixels
    char plano[2];         // sempre 1 (antigamente usaod para montar atraves de sobreposicoes)
    char bits_pixel[2];    // bits por pixel
    int compressao;        // 0 = sem compressao (nao usado mais)
    int tamanho_img;       // bytes de pixels
    int resolucao_horizontal;
    int resolucao_vertical;
    int cores_usadas;
    int cores_importantes;
} Info_bmp;


int main()
{
    FILE *teste;
    char tipo[2];
    Cab_bmp cab;    // cabecalho do bmp
    Info_bmp info;  // info da img do bmp
    int plano, bits;

    /* Conferencia dos tamanhos (esperado: 4, 12 e 40) */
    printf("sizeof(int)      = %d (esperado 4)\n", (int) sizeof(int));
    printf("sizeof(Cab_bmp)  = %d (esperado 12)\n", (int) sizeof(Cab_bmp));
    printf("sizeof(Info_bmp) = %d (esperado 40)\n\n", (int) sizeof(Info_bmp));

    /* Abre o arquivo em modo leitura binaria */
    teste = fopen("teste.bmp", "rb");
    if (teste == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo.\n");
        return 1;
    }

    // Le os cabecalhos, na ordem em que aparecem no arquivo
    fread(tipo, 1, 2, teste);                  // "BM"  (2 bytes)
    fread(&cab, sizeof(Cab_bmp), 1, teste);    // 12 bytes
    fread(&info, sizeof(Info_bmp), 1, teste);  // 40 bytes

    /* Confere se e mesmo um BMP */
    if (tipo[0] != 'B' || tipo[1] != 'M') {
        printf("Erro: o arquivo nao e um BMP (falta 'BM').\n");
        fclose(teste);
        return 1;
    }

    /* Monta os valores de 2 bytes (little-endian: byte baixo + 256 * byte alto) */
    plano = info.plano[0] + 256 * info.plano[1];
    bits = info.bits_pixel[0] + 256 * info.bits_pixel[1];

    /* Exibe os dados */
    printf("=== Cabecalho do arquivo ===\n");
    printf("Tipo                  : %c%c\n", tipo[0], tipo[1]);
    printf("Tamanho do arquivo    : %d bytes\n", cab.tamanho);
    printf("Reservado 1           : %d %d\n", cab.reservado1[0], cab.reservado1[1]);
    printf("Reservado 2           : %d %d\n", cab.reservado2[0], cab.reservado2[1]);
    printf("Offset dos pixels     : %d\n\n", cab.offsetpixels);

    printf("=== Cabecalho da imagem ===\n");
    printf("Tamanho do cabecalho  : %d bytes\n", info.tamanho);
    printf("Largura               : %d pixels\n", info.largura);
    printf("Altura                : %d pixels\n", info.altura);
    printf("Planos                : %d\n", plano);
    printf("Bits por pixel        : %d\n", bits);
    printf("Compressao            : %d\n", info.compressao);
    printf("Tamanho da imagem     : %d bytes\n", info.tamanho_img);
    printf("Resolucao horizontal  : %d pixels/metro\n", info.resolucao_horizontal);
    printf("Resolucao vertical    : %d pixels/metro\n", info.resolucao_vertical);
    printf("Cores usadas          : %d\n", info.cores_usadas);
    printf("Cores importantes     : %d\n", info.cores_importantes);

    fclose(teste);
    return 0;
}