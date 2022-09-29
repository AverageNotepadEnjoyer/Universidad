#include <stdio.h>

int Enero;
int Febrero;
int Marzo;
int Abril;
int Mayo;
int Junio;
int Julio;
int Agosto;
int Septiembre;
int Octubre;
int Noviembre;
int Diciembre;
int MesMayor;
int MesMenor;


int main(){

printf("Ingrese, en milímetros, la cantidad de lluvia de Enero: ");
scanf("%d", &Enero);
printf("Ingrese, en milímetros, la cantidad de lluvia de Febrero: ");
scanf("%d", &Febrero);
printf("Ingrese, en milímetros, la cantidad de lluvia de Marzo: ");
scanf("%d", &Marzo);
printf("Ingrese, en milímetros, la cantidad de lluvia de Abril: ");
scanf("%d", &Abril);
printf("Ingrese, en milímetros, la cantidad de lluvia de Mayo: ");
scanf("%d", &Mayo);
printf("Ingrese, en milímetros, la cantidad de lluvia de Junio: ");
scanf("%d", &Junio);
printf("Ingrese, en milímetros, la cantidad de lluvia de Julio: ");
scanf("%d", &Julio);
printf("Ingrese, en milímetros, la cantidad de lluvia de Agosto: ");
scanf("%d", &Agosto);
printf("Ingrese, en milímetros, la cantidad de lluvia de Septiembre: ");
scanf("%d", &Septiembre);
printf("Ingrese, en milímetros, la cantidad de lluvia de Octubre: ");
scanf("%d", &Octubre);
printf("Ingrese, en milímetros, la cantidad de lluvia de Noviembre: ");
scanf("%d", &Noviembre);
printf("Ingrese, en milímetros, la cantidad de lluvia de Diciembre: ");
scanf("%d", &Diciembre);

if (Enero > Febrero && Enero > Marzo && Enero > Abril && Enero > Mayo && Enero > Junio && Enero > Julio && Enero > Agosto && Enero > Septiembre && Enero > Octubre && Enero > Noviembre && Enero > Diciembre){
    printf("El mes de mayor precipitación fue Enero ");
}else{
    if (Febrero > Enero && Febrero > Marzo && Febrero > Abril && Febrero > Mayo && Febrero > Junio && Febrero > Julio && Febrero > Agosto && Febrero > Septiembre && Febrero > Octubre && Febrero > Noviembre && Febrero > Diciembre){
        printf("El mes de mayor precipitación fue Febrero ");
    }else{
        if (Marzo > Enero && Marzo > Febrero && Marzo > Abril && Marzo > Mayo && Marzo > Junio && Marzo > Julio && Marzo > Agosto && Marzo > Septiembre && Marzo > Octubre && Marzo > Noviembre && Marzo > Diciembre){
            printf("El mes de mayor precipitación fue Marzo ");
        }else{
            if (Abril > Enero && Abril > Febrero && Abril > Marzo && Abril > Mayo && Abril > Junio && Abril > Julio && Abril > Agosto && Abril > Septiembre && Abril > Octubre && Abril > Noviembre && Abril > Diciembre){
                printf("El mes de mayor precipitación fue Abril ");
            }else{
                if (Mayo > Enero && Mayo > Febrero && Mayo > Marzo && Mayo > Abril && Mayo > Junio && Mayo > Julio && Mayo > Agosto && Mayo > Septiembre && Mayo > Octubre && Mayo > Noviembre && Mayo > Diciembre){
                    printf("El mes de mayor precipitación fue Mayo ");
                }else{
                    if (Junio > Enero && Junio > Febrero && Junio > Marzo && Junio > Abril && Junio > Mayo && Junio > Julio && Junio > Agosto && Junio > Septiembre && Junio > Octubre && Junio > Noviembre && Junio > Diciembre){
                        printf("El mes de mayor precipitación fue Junio ");
                    }else{
                        if (Julio > Enero && Julio > Febrero && Julio > Marzo && Julio > Abril && Julio > Mayo && Julio > Junio && Julio > Agosto && Julio > Septiembre && Julio > Octubre && Julio > Noviembre && Julio > Diciembre){
                            printf("El mes de mayor precipitación fue Julio ");
                        }else{
                            if (Agosto > Enero && Agosto > Febrero && Agosto > Marzo && Agosto > Abril && Agosto > Mayo && Agosto > Junio && Agosto > Julio && Agosto > Septiembre && Agosto > Octubre && Agosto > Noviembre && Agosto > Diciembre){
                                printf("El mes de mayor precipitación fue Agosto ");
                            }else{
                                if (Septiembre > Enero && Septiembre > Febrero && Septiembre > Marzo && Septiembre > Abril && Septiembre > Mayo && Septiembre > Junio && Septiembre > Julio && Septiembre > Agosto && Septiembre > Octubre && Septiembre > Noviembre && Septiembre > Diciembre){
                                    printf("El mes de mayor precipitación fue Septiembre ");
                                }else{
                                    if (Octubre > Enero && Octubre > Febrero && Octubre > Marzo && Octubre > Abril && Octubre > Mayo && Octubre > Junio && Octubre > Julio && Octubre > Agosto && Octubre > Septiembre && Octubre > Noviembre && Octubre > Diciembre){
                                        printf("El mes de mayor precipitación fue Octubre ");
                                    }else{
                                        if (Noviembre > Enero && Noviembre > Febrero && Noviembre > Marzo && Noviembre > Abril && Noviembre > Mayo && Noviembre > Junio && Noviembre > Julio && Noviembre > Agosto && Noviembre > Septiembre && Noviembre > Octubre && Noviembre > Diciembre){
                                            printf("El mes de mayor precipitación fue Noviembre ");
                                        }else{
                                            if (Diciembre > Enero && Diciembre > Febrero && Diciembre > Marzo && Diciembre > Abril && Diciembre > Mayo && Diciembre > Junio && Diciembre > Julio && Diciembre > Agosto && Diciembre > Septiembre && Diciembre > Octubre && Diciembre > Noviembre){
                                                printf("El mes de mayor precipitación fue Diciembre ");
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

if (Enero < Febrero && Enero < Marzo && Enero < Abril && Enero < Mayo && Enero < Junio && Enero < Julio && Enero < Agosto && Enero < Septiembre && Enero < Octubre && Enero < Noviembre && Enero < Diciembre){
    printf("y el de menor fue Enero");
}else{
    if (Febrero < Enero && Febrero < Marzo && Febrero < Abril && Febrero < Mayo && Febrero < Junio && Febrero < Julio && Febrero < Agosto && Febrero < Septiembre && Febrero < Octubre && Febrero < Noviembre && Febrero < Diciembre){
        printf("y el de menor fue Febrero");
    }else{
        if (Marzo < Enero && Marzo < Febrero && Marzo < Abril && Marzo < Mayo && Marzo < Junio && Marzo < Julio && Marzo < Agosto && Marzo < Septiembre && Marzo < Octubre && Marzo < Noviembre && Marzo < Diciembre){
            printf("y el de menor fue Marzo");
        }else{
            if (Abril < Enero && Abril < Febrero && Abril < Marzo && Abril < Mayo && Abril < Junio && Abril < Julio && Abril < Agosto && Abril < Septiembre && Abril < Octubre && Abril < Noviembre && Abril < Diciembre){
                printf("y el de menor fue Abril");
            }else{
                if (Mayo < Enero && Mayo < Febrero && Mayo < Marzo && Mayo < Abril && Mayo < Junio && Mayo < Julio && Mayo < Agosto && Mayo < Septiembre && Mayo < Octubre && Mayo < Noviembre && Mayo < Diciembre){
                    printf("y el de menor fue Mayo");
                }else{
                    if (Junio < Enero && Junio < Febrero && Junio < Marzo && Junio < Abril && Junio < Mayo && Junio < Julio && Junio < Agosto && Junio < Septiembre && Junio < Octubre && Junio < Noviembre && Junio < Diciembre){
                        printf("y el de menor fue Junio");
                    }else{
                        if (Julio < Enero && Julio < Febrero && Julio < Marzo && Julio < Abril && Julio < Mayo && Julio < Junio && Julio < Agosto && Julio < Septiembre && Julio < Octubre && Julio < Noviembre && Julio < Diciembre){
                            printf("y el de menor fue Julio");
                        }else{
                            if (Agosto < Enero && Agosto < Febrero && Agosto < Marzo && Agosto < Abril && Agosto < Mayo && Agosto < Junio && Agosto < Julio && Agosto < Septiembre && Agosto < Octubre && Agosto < Noviembre && Agosto < Diciembre){
                                printf("y el de menor fue Agosto");
                            }else{
                                if (Septiembre < Enero && Septiembre < Febrero && Septiembre < Marzo && Septiembre < Abril && Septiembre < Mayo && Septiembre < Junio && Septiembre < Julio && Septiembre < Agosto && Septiembre < Octubre && Septiembre < Noviembre && Septiembre < Diciembre){
                                    printf("y el de menor fue Septiembre");
                                }else{
                                    if (Octubre < Enero && Octubre < Febrero && Octubre < Marzo && Octubre < Abril && Octubre < Mayo && Octubre < Junio && Octubre < Julio && Octubre < Agosto && Octubre < Septiembre && Octubre < Noviembre && Octubre < Diciembre){
                                        printf("y el de menor fue Octubre");
                                    }else{
                                        if (Noviembre < Enero && Noviembre < Febrero && Noviembre < Marzo && Noviembre < Abril && Noviembre < Mayo && Noviembre < Junio && Noviembre < Julio && Noviembre < Agosto && Noviembre < Septiembre && Noviembre < Octubre && Noviembre < Diciembre){
                                            printf("y el de menor fue Noviembre");
                                        }else{
                                            if (Diciembre < Enero && Diciembre < Febrero && Diciembre < Marzo && Diciembre < Abril && Diciembre < Mayo && Diciembre < Junio && Diciembre < Julio && Diciembre < Agosto && Diciembre < Septiembre && Diciembre < Octubre && Diciembre < Noviembre){
                                                printf("y el de menor fue Diciembre");
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
}

