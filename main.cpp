#include <iostream>
#include "AKA.h"

using namespace std;

int main() {
    EPRT_Score scores[37] = {
        {"DERIL DIAZ", "103012300074", 677},
        {"DANISH WAHYU IBRAHIM", "103012330440", 377},
        {"DEWANDA WIJAYARAJASA KILA", "103012300042", 334},
        {"MUHAMMAD ARSYAD ZHAFIRIAN", "103012300013", 350},
        {"ILHAM FADHILAH SANNI DARM", "103012300263", 557},
        {"FAISHAL FAKHRILLAH", "103012300474", 470},
        {"MUAMAR ZIDAN TRI ANTORO", "103012300381", 395},
        {"FAIZ ELFAHAD KURNIAWAN", "103012300408", 452},
        {"FADHILAH AKBAR KHAIROGI", "103012300394", 312},
        {"MUHAMMAD RIZKI TAUFIK FAJ", "103012300153", 638},
        {"A.M. AIMAN IBNU ABBAS", "103012300340", 543},
        {"NAILA SALMAVITA MUMTAZ", "103012300327", 571},
        {"NAUFAL ARRAFI REVANZA", "103012330137", 540},
        {"REEVANZA ABEL DESTA ARIFI", "103012330104", 553},
        {"JIAN HAZEL SITORUS", "103012300187", 463},
        {"MIKHAEL RESTU MAHARDHIKA", "103012300277", 646},
        {"IZZRA HILAL ADITYO", "103012330168", 442},
        {"ZIYAD FATHIR AL BIAROZA", "103012300455", 569},
        {"AZZAHRA INDAH", "103012300238", 364},
        {"MADE AYU CANAKYA WIGUNA G", "103012300161", 451},
        {"I GEDE KRISNA GANESHA WID", "103012300088", 647},
        {"I PUTU JUSTINE BUDI WIJAY", "103012300361", 570},
        {"HAFIZH MARFIANSYAH PUTRA", "103012300201", 525},
        {"RYAN GHAFRAN LUHUR", "103012300234", 420},
        {"ALIF RAHMAN RASYAD ADI", "103012300220", 389},
        {"RAIHAN FACHRIZA PUTRA SAN", "103012300307", 408},
        {"MUHAMAD JOURDY JALU RADIT", "103012300121", 459},
        {"MAULIDA HELYATI", "103012300365", 670},
        {"DESHIFA CANTIKA DONDO", "103012330238", 647},
        {"MAULIANI RAHMA FAZWAT", "103012300112", 328},
        {"FATIH AZHAR NOVENDI", "103012300028", 513},
        {"SATRIA ARYA PRATAMA", "103012300250", 530},
        {"MUHAMMAD ARIF FADLUL RAHM", "103012330292", 379},
        {"ZAHRA AUDIA ZULFA", "103012300054", 435},
        {"RAZAQ FARHAN", "103012300322", 636},
        {"IGNATIUS JONATHAN PRATOMO", "1301213019", 398},
        {"ANDI YUSRIL HAQ", "1301213009", 509}
    };

    int choice;
    do {
        // Menu
        cout << "\nMenu:\n";
        cout << "1. Find Maximum Score (Iterative)\n";
        cout << "2. Find Maximum Score (Recursive)\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Iteratif
                int maxIterative = iterativeMax(scores, 37);
                for (int i = 0; i < 37; ++i) {
                    if (scores[i].score == maxIterative) {
                        cout << "Maximum score (Iterative):\n";
                        cout << "Name: " << scores[i].name << ", NIM: " << scores[i].nim << ", Score: " << scores[i].score << '\n';
                        break;
                    }
                }
                break;
            }
            case 2: {
                // Rekursif
                int maxRecursive = recursiveMax(scores, 36);
                for (int i = 0; i < 37; ++i) {
                    if (scores[i].score == maxRecursive) {
                        cout << "Maximum score (Recursive):\n";
                        cout << "Name: " << scores[i].name << ", NIM: " << scores[i].nim << ", Score: " << scores[i].score << '\n';
                        break;
                    }
                }
                break;
            }
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
