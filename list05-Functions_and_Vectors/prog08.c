#include <stdio.h>

void number_in_full_10(int n) {
    if(n <= 10 && n >= -10) {
        printf("Numero: ");
        if(n == 0) {
            printf("Zero");
        } else {

            if(n < 0) {
                printf("Menos ");
                if(n == -1) {
                    printf("Um");
                } else {
                    if(n == -2) {
                        printf("Dois");
                    } else {
                        if(n == -3) {
                            printf("Tres");
                        } else {
                            if(n == -4) {
                                printf("Quatro");
                            } else {
                                if(n == -5) {
                                    printf("Cinco");
                                } else {
                                    if(n == -6) {
                                        printf("Seis");
                                    } else {
                                        if(n == -7) {
                                            printf("Sete");
                                        } else {
                                            if(n == -8) {
                                                printf("Oito");
                                            } else {
                                                if(n == -9) {
                                                    printf("Nove");
                                                } else {
                                                    if(n == -10) {
                                                        printf("Dez");
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if(n == 1) {
                    printf("Um");
                } else {
                    if(n == 2) {
                        printf("Dois");
                    } else {
                        if(n == 3) {
                            printf("Tres");
                        } else {
                            if(n == 4) {
                                printf("Quatro");
                            } else {
                                if(n == 5) {
                                    printf("Cinco");
                                } else {
                                    if(n == 6) {
                                        printf("Seis");
                                    } else {
                                        if(n == 7) {
                                            printf("Sete");
                                        } else {
                                            if(n == 8) {
                                                printf("Oito");
                                            } else {
                                                if(n == 9) {
                                                    printf("Nove");
                                                } else {
                                                    if(n == 10) {
                                                        printf("Dez");
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
    } else {
        printf("ERRO: Informe um valor entre -10 e 10.");
    }
    
}

int main() {
    int n;
    printf("Informe um valor [-10, 10]: ");
    scanf(" %d", &n);
    
    number_in_full_10(n);

    return 0;
}