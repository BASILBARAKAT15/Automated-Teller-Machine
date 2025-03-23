// ATM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    
        int PIN_NUMBER;
        int B; int y; int h; int i;
        int z; char m; int f = 1000; int p; double convert;
        printf("*********YOU HAVE THREE TRIALS*******\n");
        for ( i=0; i < 3; i++) {
            printf("ENTER YOUR SECRET PIN_NUMBER:");
            scanf("%d", &PIN_NUMBER);
            if (PIN_NUMBER == 1221)break;
            if (PIN_NUMBER != 1221)printf("\nPLEASE ENTER VALID PASSWORD\n");
            if (i == 3)printf("THANK YOU FOR USING ATM");
        }
        //////////////////////////////////////////////////////////////////////////////
        if (i < 3 || PIN_NUMBER == 1221) {
            int L;
            printf("\n************welcome to ATM service*************\n");
            printf("1.withdrawal cash\n2.Deposit cash\n3.chech Balance\n4.curreny Exchange\n5.Exit\n");
            printf("\n***********************************\n");
            printf("Enter your choice:");
            scanf("%d", &L);
            switch (L) {
            case 1:printf("\n ENTER THE AMOUNT TOWITHRAM:"); scanf("%d", &z);
                while (z % 20) { printf("\n PLEASE ENTER THE AMOUNT IN MULTPLES OF 20\n"); scanf("%d", &z); }
                while (z > f) { printf("YUOR CURRENT BALANCE IS %d\n", f); scanf("%d", &z); }
                f -= z;
                printf("\n\n");
                printf("PLEASE COLLECT CASH\n");
                printf("YOUR CURRENT BALANCE IS %d", f);
                printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                scanf(" %c", &m);
                ////////////////////////////////////////////while loop     
                if (m == 'y' || m == 'Y')while (m == 'y' || m == 'Y') {
                    printf("\n************welcome to ATM service*************\n");
                    printf("1.withdrawal cash\n2.Deposit cash\n3.chech Balance\n4.curreny Exchange\n5.Exit\n");
                    printf("\n**********************************\n");
                    printf("Enter your choice:");
                    scanf("%d", &z);
                    switch (z) {
                    case 1:printf("\n ENTER THE AMOUNT TOWITHRAM:"); scanf("%d", &z);
                        while (z % 20) { printf("\n PLEASE ENTER THE AMOUNT IN MULTPLES OF 20\n"); scanf("%d", &z); }
                        while (z > f) { printf("YUOR CURRENT BALANCE IS %d\n", f); scanf("%d", &z); }
                        f -= z;
                        printf("\n\n");
                        printf("PLEASE COLLECT CASH\n");
                        printf("YOUR CURRENT BALANCE IS %d", f);
                        printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                        if (m == 'Y' || m == 'y')continue;
                        break;
                    case 2:printf("\n ENTER THE AMOUNT TO DEPOSIT:");
                        scanf("%d", &h); f += h;
                        printf("\n YOUR BALANCE IS %d", f);
                        printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m);
                        if (m == 'Y' || m == 'y')continue;
                        if (m == 'n' || m == 'N')break;
                    case 3:printf("\n YOUR BALANCE US %d", f); printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m);
                        if (m == 'Y' || m == 'y')continue;
                        if (m == 'n' || m == 'N')break;

                    case 4:printf("\n1.1.000JOD=1.14USA\n2.1.000JOD=4.98ILS\n3.1.000JOD=1.41EUR\n");
                        printf("\n ENTER THE AMOUNT TO CONVERT:");
                        scanf("%d", &p);
                        while (p > f) { printf("INSUFFICENT BALANCE\n"); scanf("%d", &p); }
                        printf("1.JOD TO USA\n2.JOD TO ILS\n3.JOD TO EUR\n4.MAIN MENUE");
                        printf("\nENTER YOUR CHOICE:");
                        scanf("%d", &y);
                        ///////////////////////////////
                        switch (y) {
                        case 1:printf("THE AMOUNT=%lf", convert = p * 1.14); break;
                        case 2:printf("THE AMOUNT=%lf", convert = p * 4.98); break;
                        case 3:printf("THE AMOUNT=%lf", convert = p * 1.41); break;
                        case 4:break;


                        }if (y == 4)continue;
                        ////////////////////////////////////////////////
                    case 5:printf("THANKE YOU FOR USING ATM\n");  printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m);
                        if (m == 'Y' || m == 'y')continue;
                        if (m == 'n' || m == 'N')printf("THANKE YOU FOR USING ATM"); break;
                    }

                } printf("THANKE YOU FOR USING ATM"); break;
                //////////////////////////////////////////////////////while lopp//////////////////////////////////     
            case 2:printf("\n ENTER THE AMOUNT TO DEPOSIT:");
                scanf("%d", &h); f += h;
                printf("\n YOUR BALANCE IS %d", f);
                printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                scanf(" %c", &m);
                if (m == 'y' || m == 'Y')while (m == 'y' || m == 'Y') {
                    printf("\n************welcome to ATM service*************\n");
                    printf("1.withdrawal cash\n2.Deposit cash\n3.chech Balance\n4.curreny Exchange\n5.Exit\n");
                    printf("\n*************************************\n");
                    printf("Enter your choice:");
                    scanf("%d", &z);
                    switch (z) {
                    case 1:printf("\n ENTER THE AMOUNT TOWITHRAM:"); scanf("%d", &z);
                        while (z % 20) { printf("\n PLEASE ENTER THE AMOUNT IN MULTPLES OF 20\n"); scanf("%d", &z); }
                        while (z > f) { printf("YUOR CURRENT BALANCE IS %d\n", f); scanf("%d", &z); }
                        f -= z;
                        printf("\n\n");
                        printf("PLEASE COLLECT CASH\n");
                        printf("YOUR CURRENT BALANCE IS %d", f);
                        printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m); if (m == 'y' || m == 'y')continue;
                        if (m == 'n' || m == 'N')break;
                    case 2:printf("\n ENTER THE AMOUNT TO DEPOSIT:");
                        scanf("%d", &h); f += h;
                        printf("\n YOUR BALANCE IS %d", f);
                        printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                        if (m == 'Y' || m == 'y')continue;
                    case 3:printf("\n YOUR BALANCE US %d", f);  printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                        if (m == 'Y' || m == 'y')continue;

                    case 4:printf("\n1.1.000JOD=1.14USA\n2.1.000JOD=4.98ILS\n3.1.000JOD=1.41EUR\n");
                        printf("\n ENTER THE AMOUNT TO CONVERT:");
                        scanf("%d", &p);
                        while (p > f) { printf("INSUFFICENT BALANCE\n"); scanf("%d", &p); }
                        printf("1.JOD TO USA\n2.JOD TO ILS\n3.JOD TO EUR\n4.MAIN MENUE");
                        printf("\nENTER YOUR CHOICE:");
                        scanf("%d", &y);
                        ///////////////////////////////
                        switch (y) {
                        case 1:printf("THE AMOUNT=%lf", convert = p * 1.14); break;
                        case 2:printf("THE AMOUNT=%lf", convert = p * 4.98); break;
                        case 3:printf("THE AMOUNT=%lf", convert = p * 1.41); break;
                        case 4: break;

                        }if (y == 4)continue;
                        ////////////////////////////////////////////////
                    case 5:printf("THANKE YOU FOR USING ATM\n");  printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m);
                        if (m == 'Y' || m == 'y')continue;
                        if (m == 'n' || m == 'N')printf("THANKE YOU FOR USING ATM"); break;
                    }

                } printf("THANKE YOU FOR USING ATM"); break;
                ////////////////////////////////////////////////////////////////////////// /////////////////////////////////////////////////   
            case 3:printf("\n YOUR BALANCE US %d", f); printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                scanf(" %c", &m);
                if (m == 'y' || m == 'Y')while (m == 'y' || m == 'Y') {
                    printf("\n************welcome to ATM service*************\n");
                    printf("1.withdrawal cash\n2.Deposit cash\n3.chech Balance\n4.curreny Exchange\n5.Exit\n");
                    printf("\n******************************\n");
                    printf("Enter your choice:");
                    scanf("%d", &z);
                    switch (z) {
                    case 1:printf("\n ENTER THE AMOUNT TOWITHRAM:"); scanf("%d", &z);
                        while (z % 20) { printf("\n PLEASE ENTER THE AMOUNT IN MULTPLES OF 20\n"); scanf("%d", &z); }
                        while (z > f) { printf("YUOR CURRENT BALANCE IS %d\n", f); scanf("%d", &z); }
                        f -= z;
                        printf("\n\n");
                        printf("PLEASE COLLECT CASH\n");
                        printf("YOUR CURRENT BALANCE IS %d", f);
                        printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                        if (m == 'Y' || m == 'y')continue;
                    case 2:printf("\n ENTER THE AMOUNT TO DEPOSIT:");
                        scanf("%d", &h); f += h;
                        printf("\n YOUR BALANCE IS %d", f);
                        printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                        if (m == 'Y' || m == 'y')continue;
                    case 3:printf("\n YOUR BALANCE US %d", f); printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                        if (m == 'Y' || m == 'y')continue;


                    case 4:printf("\n1.1.000JOD=1.14USA\n2.1.000JOD=4.98ILS\n3.1.000JOD=1.41EUR\n");
                        printf("\n ENTER THE AMOUNT TO CONVERT:");
                        scanf("%d", &p);
                        while (p > f) { printf("INSUFFICENT BALANCE\n"); scanf("%d", &p); }
                        printf("1.JOD TO USA\n2.JOD TO ILS\n3.JOD TO EUR\n4.MAIN MENUE");
                        printf("\nENTER YOUR CHOICE:");
                        scanf("%d", &y);
                        ///////////////////////////////
                        switch (y) {
                        case 1:printf("THE AMOUNT=%lf", convert = p * 1.14); break;
                        case 2:printf("THE AMOUNT=%lf", convert = p * 4.98); break;
                        case 3:printf("THE AMOUNT=%lf", convert = p * 1.41); break;
                        case 4: break;

                        }if (y == 4)continue;
                        ////////////////////////////////////////////////
                    case 5:printf("THANKE YOU FOR USING ATM\n");  printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m);
                        if (m == 'Y' || m == 'y')continue;
                        if (m == 'n' || m == 'N')break;  printf("THANKE YOU FOR USING ATM");
                    }

                } printf("THANKE YOU FOR USING ATM"); break;
                ////////////////////////////////////////////////////////////////////////////////////////////// ///////////////////////////
            case 4:printf("\n1.1.000JOD=1.14USA\n2.1.000JOD=4.98ILS\n3.1.000JOD=1.41EUR\n");
                printf("\n******************************\n");
                printf("\n ENTER THE AMOUNT TO CONVERT:");
                scanf("%d", &p);
                while (p > f) { printf("INSUFFICENT BALANCE\n"); scanf("%d", &p); }
                printf("1.JOD TO USA\n2.JOD TO ILS\n3.JOD TO EUR\n4.MAIN MENUE");
                printf("\nENTER YOUR CHOICE:");
                scanf("%d", &y);
                ///////////////////////////////
                switch (y) {
                case 1:printf("THE AMOUNT=%lf", convert = p * 1.14); break;
                case 2:printf("THE AMOUNT=%lf", convert = p * 4.98); break;
                case 3:printf("THE AMOUNT=%lf", convert = p * 1.41); break;
                case 4: printf("\n************welcome to ATM service*************\n");
                    printf("1.withdrawal cash\n2.Deposit cash\n3.chech Balance\n4.curreny Exchange\n5.Exit\n");
                    printf("Enter your choice:");
                    scanf("%d", &z);
                    switch (z) {
                    case 1:printf("\n ENTER THE AMOUNT TOWITHRAM:"); scanf("%d", &z);
                        while (z % 20) { printf("\n PLEASE ENTER THE AMOUNT IN MULTPLES OF 20\n"); scanf("%d", &z); }
                        while (z > f) { printf("YUOR CURRENT BALANCE IS %d\n", f); scanf("%d", &z); }
                        f -= z;
                        printf("\n\n");
                        printf("PLEASE COLLECT CASH\n");
                        printf("YOUR CURRENT BALANCE IS %d", f);
                        printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m);
                        if (m == 'y' || m == 'Y')while (m == 'y' || m == 'Y') {
                            printf("\n************welcome to ATM service*************\n");
                            printf("1.withdrawal cash\n2.Deposit cash\n3.chech Balance\n4.curreny Exchange\n5.Exit\n");
                            printf("\n***********************************\n");
                            printf("Enter your choice:");
                            scanf("%d", &z);
                            switch (z) {
                            case 1:printf("\n ENTER THE AMOUNT TOWITHRAM:"); scanf("%d", &z);
                                while (z % 20) { printf("\n PLEASE ENTER THE AMOUNT IN MULTPLES OF 20\n"); scanf("%d", &z); }
                                while (z > f) { printf("YUOR CURRENT BALANCE IS %d\n", f); scanf("%d", &z); }
                                f -= z;
                                printf("\n\n");
                                printf("PLEASE COLLECT CASH\n");
                                printf("YOUR CURRENT BALANCE IS %d", f);
                                printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                                scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                                if (m == 'Y' || m == 'y')continue;
                            case 2:printf("\n ENTER THE AMOUNT TO DEPOSIT:");
                                scanf("%d", &h); f += h;
                                printf("\n YOUR BALANCE IS %d", f);
                                printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                                scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                                if (m == 'Y' || m == 'y')continue;
                            case 3:printf("\n YOUR BALANCE US %d", f); printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                                scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                                if (m == 'Y' || m == 'y')continue;

                            case 4:printf("\n1.1.000JOD=1.14USA\n2.1.000JOD=4.98ILS\n3.1.000JOD=1.41EUR\n");
                                printf("\n ENTER THE AMOUNT TO CONVERT:");
                                scanf("%d", &p);
                                while (p > f) { printf("INSUFFICENT BALANCE\n"); scanf("%d", &p); }
                                printf("1.JOD TO USA\n2.JOD TO ILS\n3.JOD TO EUR\n4.MAIN MENUE");
                                printf("\nENTER YOUR CHOICE:");
                                scanf("%d", &y);
                                ///////////////////////////////
                                switch (y) {
                                case 1:printf("THE AMOUNT=%lf", convert = p * 1.14); break;
                                case 2:printf("THE AMOUNT=%lf", convert = p * 4.98); break;
                                case 3:printf("THE AMOUNT=%lf", convert = p * 1.41); break;
                                case 4:break;
                                }if (y == 4)continue;
                                ////////////////////////////////////////////////
                            case 5:printf("THANKE YOU FOR USING ATM\n");  printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                                scanf(" %c", &m);
                                if (m == 'Y' || m == 'y')continue;
                                if (m == 'n' || m == 'N')break;   printf("THANKE YOU FOR USING ATM");
                            }

                        } printf("THANKE YOU FOR USING ATM"); break;
                    }//
                }
                ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            case 5:printf("THANKE YOU FOR USING ATM\n");  printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                scanf(" %c", &m);
                if (m == 'y' || m == 'Y')while (m == 'y' || m == 'Y') {
                    printf("\n************welcome to ATM service*************\n");
                    printf("1.withdrawal cash\n2.Deposit cash\n3.chech Balance\n4.curreny Exchange\n5.Exit\n");
                    printf("\n****************************\n");
                    printf("Enter your choice:");
                    scanf("%d", &z);
                    switch (z) {
                    case 1:printf("\n ENTER THE AMOUNT TOWITHRAM:"); scanf("%d", &z);
                        while (z % 20) { printf("\n PLEASE ENTER THE AMOUNT IN MULTPLES OF 20\n"); scanf("%d", &z); }
                        while (z > f) { printf("YUOR CURRENT BALANCE IS %d\n", f); scanf("%d", &z); }
                        f -= z;
                        printf("\n\n");
                        printf("PLEASE COLLECT CASH\n");
                        printf("YOUR CURRENT BALANCE IS %d", f);
                        printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                        if (m == 'Y' || m == 'y')continue;
                    case 2:printf("\n ENTER THE AMOUNT TO DEPOSIT:");
                        scanf("%d", &h); f += h;
                        printf("\n YOUR BALANCE IS %d", f);
                        printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                        if (m == 'Y' || m == 'y')continue;
                    case 3:printf("\n YOUR BALANCE US %d", f); printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m); if (m == 'n' || m == 'N')break;
                        if (m == 'Y' || m == 'y')continue;

                    case 4:printf("\n1.1.000JOD=1.14USA\n2.1.000JOD=4.98ILS\n3.1.000JOD=1.41EUR\n");
                        printf("\n ENTER THE AMOUNT TO CONVERT:");
                        scanf("%d", &p);
                        while (p > f) { printf("INSUFFICENT BALANCE\n"); scanf("%d", &p); }
                        printf("1.JOD TO USA\n2.JOD TO ILS\n3.JOD TO EUR\n4.MAIN MENUE");
                        printf("\nENTER YOUR CHOICE:");
                        scanf("%d", &y);
                        ///////////////////////////////
                        switch (y) {
                        case 1:printf("THE AMOUNT=%lf", convert = p * 1.14); break;
                        case 2:printf("THE AMOUNT=%lf", convert = p * 4.98); break;
                        case 3:printf("THE AMOUNT=%lf", convert = p * 1.41); break;
                        case 4: break;

                        }if (y == 4)continue;
                        ////////////////////////////////////////////////
                    case 5:printf("THANKE YOU FOR USING ATM\n");  printf("\n\nDO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):");
                        scanf(" %c", &m);
                        if (m == 'Y' || m == 'y')continue;
                        if (m == 'n' || m == 'N')break;   printf("THANKE YOU FOR USING ATM");
                    }

                }

                printf("THANKE YOU FOR USING ATM");
                //////////////////////////////////////////////////////////////////////////////////////////////////////////////////     
            }



        }


        
    }

