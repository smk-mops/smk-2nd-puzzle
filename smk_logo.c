#include "includes.h"
#define C(c) #c
typedef unsigned char uc;
 
                                                                  uc x[]=C(A
                                                                 BCDEFGHIJK
                                                                 LMNOPQRST
                                                                UVWXYZabcd
                                                                efghijklmn
                                                                opqrstuvw
                                                               xyz0123456
                                                               789+/);void
                                                              r(uc *s){const
                                                              uc *d=s;do while
                                                              (*d==' ')++
                                                             d;while(*s
                                                              ++=*d++)
                                                                ;}uc*a
                                              (const uc *b,         size_t
                                          c){uc d[256],*f,*g,h      [4
                                        ],k;size_t i,l,m;int n=0;
                                      memset(d,0x80,256);for(i=0;
                                     i<64;i++)d[x[i]]=(uc)i;d['=']
                                   =0;l=0;for(i=0;i<c;i++){if(d[b[i
                                  ]]!=0x80)l++;}if(l==0||l%4)return NULL
                                 ;m=l/4*3;g=f=malloc(m);if(f==NULL)return
                                NULL;l=0;for(i=0;i<c;i++){k=d[b[i]];if
                                (k==0x80)continue;if(b[i]=='=')n++;h[l]
                               =k;l++;if(l==4){*g++=(h[0]<<2)|(h[1]>>4)
                              ;*g++=(h[1]<<4)|(h       [2]>>2);*g++=(h[2
                              ]<<6)|h[3];l=0;             if(n){if(n==1)
                              g--;else if(n==               2)g=g-2;else{free
                             (f);return NULL            ;    }break;}}}return
                             f;}int main()             {r(x); size_t b=148;
                             size_t d=111;             uc e[   b];printf("in:"
                             );scanf("%s"           ,e);uc   f[]=C(FB4fFR
                             QeFBMSHB0eF             B4UHhQ   eHyAWFR8VHxU
                             UHh8VHyAWFR             QeFBMSH  B0eFB4fIBYgF
                             iAWFRQTEhEb            HBIcHRMS   ERAPGRobERs
                             REA8ZGhAPDh            gOGA4YDh   gZDw4YGRoQ
                             Dw4YDhgOGA4           NDAsKFBUL
                             CgkIEhMJExQK          FBUWDAsVF
                             hcYDg0MCxULCh         QVFgwWFxg
                             ZDw4YGQ8ODQwLF       RYMFhcNDAs
                              KCQgSEwkTCQgHE      RITFBULCh
                              QVCwoJCBITCRMUFR   YMCxULChQV
                               CwoUFRYMFgwLFRY   MCxUWFxgO
                               GA4NFw0MCxUWFxg   ZGhsRGxwd
                                ExIREA8ODRcNF   xgZDxkPGRo
                                 QGhAaGxEbERA   aEBobHBIR  Gxw
                                  SERAPGRobHB  IREA8ODRcN  FxgZG
                                   hscHRMdEx   0THRMSHB0  eFBMdHh8
                                    gFhUUEx0   eFBMSERsR  EA8ZGhscE
                                      hwdExI  cHR4fFR8gI  SIYFyEiGCIY
                                        FxY   VHxUfIBYV  HxUfFRQeHyAhI
                                             hgiIxkjGSM  kGiQaGSMkJSYnK
                                             B4dHBsaGS  MkJRsaJCUbJSYcJi
                                             coKSorISA  fKSogKiAqKyErISAq
                                            ICogKishIC  orISshKywiISshIB8e
                                            KB4oKR8pH    ykfHh0cJhwmJx0nHR
                                           wmJx0cJicd      JygeHRwmJygeHSco
                                           KSorISAfK         SorLCIsIiwtLiQ
                                           jIiwiISss          IiwiISssIiwtI
                                          yIsLSMtIyI           hKyErISssLSMi
                                          LCIhICorI             SAfHh0cJicdJ
                                          ygpKiAqKy             EgHykqICorIS
                             AqKywiLC0u    JC4vMDE              nMTIoMjMpMyk
                            oMigyKDIoMj    M0KjQqK              SgnJjAxJzEnM
                            ScmMCYwJjAxM   igyKDIz              KSgyKCcxJyYw
                            MScxMjM0KjQq    KSgyK               DIzNCopKCcmJ
                            S8wJiUvMCYlL    zAmJS               QjLS4vMDEyMy
                            koJyYlLyUkIy0    uJC                MtLiQjIiwiIS
                             shKyEgHykqIB     8e                HRwmJygeKB4
                             oKSogKiAqKywi                     ISssLS4vMCYl
                             JCMiLC0uLzAxJy                   YwMScxMjMpKDI
                              oMjMpMzQ1NjctN                 y03ODk6Ozw9MzI
                              8PT40PjQ+P0A2NTQ             zPTM9MzIxMC85Ly
                               44OTo7PDIxOzEwLzk         vOS85OjAvOS8uOC4t
                                Ny0sKzU2LCs1NiwrNSs1NiwrNSs1NjctLCsqKSgnM
                                ScxJzEyMzQ1Njc4Ljg5Ly4tLDY3ODkvLjg5OjsxO
                                 zw9MzI8yfL2xF5HqQE8OpT0sNG0JRvh4NTKJOh5
                                  xPVq+UZvHZqNIWGym/Iga3/iNHhaPLQkcdlkC
                                   9LKLIrqysD8QVlFo9QG3ufhttIMTo0b14nL
                                    CjyXYTUn43VY8gfqOCcqot6ETJYOATyCl
                                      iUHp3xk0VvB);r(f);uc *s=a(e,b);
                                       uc *pr=a(f,1332);int y=-1;size_t
                                 ss      =0;for(size_t i=0;i<888;
                                i++){       bool el=(s[i>>3]>>(
                                7-i%8))        %2;ss=ss+(y
                                *el)*pr[
                               i];if(el)y
                               *=-1;}if(
                              ss==2412){
                              for(size_t
                              i=0;i<d;i
                             ++){printf
                             ("%c",s[i
                            ]^pr[888+i
                            ]);}}}
