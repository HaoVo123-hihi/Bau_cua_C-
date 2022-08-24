#include <bits/stdc++.h>
#include <ctime>
#include <stdio.h>
#include <cstdlib>
#include <windows.h>
typedef unsigned long long ull;

void doi_mau()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
            system("Color 2");
        else
            system("Color 7");
        Sleep(30);
    }
    system("Color 7");
}
int main()
{
    system("Color 7");
    ull n;
    ull x, y, z;
    ull a[10];
    ull score = 10000;
    ull score2 = 0;
    ull t = 20;
    // srand(time(NULL));
    // int res = rand() % (50 - 3 + 1) + 3;
    std::string s;
    std::cout << "Vui long nhap ten cua ban ;): ";
    std::getline(std::cin, s);
    std::cout << "\n";
    std::cout << "Chao mung " << s << " den voi Casino HaoVoxx deeptry(slogan lieu an nhieu khong lieu di ve!) va tro choi Bau Cua, ban dang co 10000 VND hay co len nhe"
              << "\n";
    while (t--)
    {
        std::cout << "%ok";
        Sleep(50);
    }
    t = 10;
    std::cout << "\n";
    Sleep(3000);
    system("cls");
    srand(time(NULL));
    int c = rand() % (100 - 1 + 1) + 1;
    Sleep(50);
    std::cout << "Hien tai " << s << " dang o ban so #" << c << " chuc " << s << " may man nha!!\n";
    Sleep(50);
    while (t--)
    {
        std::cout << "%ok";
        Sleep(50);
    }
    t = 10;
    std::cout << "\n";
    Sleep(3000);
    system("cls");

    do
    {
        std::cout << "Moi ban " << s << " chon so lan ban muon choi dat cuoc 1 -10 : ";
        std::cin >> n;
        std::cout << "\n";
    } while (n > 10);

    while (score > 0 && score < ULLONG_MAX)
    {
        for (int i = 0; i < n; i++)
        {
            if (score > 0)
            {
                srand(time(NULL));
                x = rand() % (6 - 1 + 1) + 1;
                y = rand() % (6 - 1 + 1) + 1;
                z = rand() % (6 - 1 + 1) + 1;
                do{
                std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                std::cout << "Vui long chon o ban muon cuoc(1-6): "
                          << "\n";
                std::cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
                          << "\n";
                std::cout << "|| 1.Nai || 2.Bau || 3.Ga  ||"
                          << "\n";
                std::cout << "|| 4.Ca  || 5.Cua || 6.Tom ||"
                          << "\n";
                std::cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
                          << "\n";
                    std::cin >> a[i];
                } while (a[i] > 6);
                do{
                    // std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                    std::cout << "Vui long nhap so tien cuoc (so tien cuoc phai be hon so tien con lai, so tien con lai : " << score << "VND):\n";
                    std::cin >> score2;
                }while(score2 > score);
                std::cout << "\n";
                while (t--)
                {
                    std::cout << "%ok";
                    Sleep(50);
                }
                t = 10;
                std::cout << "\n";
                int d = x, f = y, g = z;
                if (x == a[i] || y == a[i] || z == a[i])
                {
                    if (x == y && y == z)
                    {
                        doi_mau();
                        score2 *= 3;
                        std::cout << "Ket qua:" << d << ' ' << f << ' ' << g << "\n";
                        while (t--)
                        {
                            std::cout << "%ok";
                            Sleep(50);
                        }
                        t = 10;
                        std::cout << "\n";
                        std::cout << "chuc mung ban da trung " << score2 << " VND"
                                  << "\n";
                        score += score2;
                        std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                    }
                    else if (x == y || y == z || z == x)
                    {
                        doi_mau();
                        score2 *= 2;
                        std::cout << "Ket qua:" << d << ' ' << f << ' ' << g << "\n";
                        while (t--)
                        {
                            std::cout << "%ok";
                            Sleep(50);
                        }
                        t = 10;
                        std::cout << "\n";
                        std::cout << "chuc mung ban da trung " << score2 << " VND"
                                  << "\n";
                        score += score2;
                        std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                    }
                    else
                    {
                        doi_mau();
                        std::cout << "Ket qua:" << d << ' ' << f << ' ' << g << "\n";
                        while (t--)
                        {
                            std::cout << "%ok";
                            Sleep(50);
                        }
                        t = 10;
                        std::cout << "\n";
                        std::cout << "chuc mung ban da trung " << score2 << " VND"
                                  << "\n";
                        score += score2;
                        std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                    }
                }
                else
                {
                    std::cout << "Ket qua:" << d << ' ' << f << ' ' << g << "\n";
                    while (t--)
                    {
                        std::cout << "%ok";
                        Sleep(50);
                    }
                    t = 10;
                    std::cout << "\n";
                    std::cout << "Oi troi ban khong may man roi, chuc may man nhe"
                              << "\n";
                    score -= score2;
                    std::cout << "tien hien tai cua " << s << ": " << score << "\n";
                }
                Sleep(5000);
                system("cls");
            }
            else
            {
                std::cout << "Thanks for playing, nhan enter de thoat, mong ban danh gia chung toi 5 sao ;)\n";
                std::system("pause");
                return 0;
            }
        }
    }
    if(score == ULLONG_MAX){
        std::cout << "Oi troi, ban la nguoi may man, ban da thang het so tien cua casino, ban la nguoi chien thang !";
        doi_mau();
        doi_mau();
        doi_mau();
        doi_mau();
    }
    std::cout << "Thanks for playing, nhan enter de thoat, mong ban danh gia chung toi 5 sao ;)\n";
    std::system("pause");
}