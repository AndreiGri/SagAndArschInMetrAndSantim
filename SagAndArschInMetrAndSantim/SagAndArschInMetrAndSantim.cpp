#include <iostream>
#include <cstdlib>

using namespace std;

int SagenAndArschinInMetr(int sag, int arsch) {
    const double metrInSag = 2.16;
    const double metrInArsch = 2.16 / 3;
    int metr = (int)(sag*metrInSag + arsch*metrInArsch);
    return metr;
}

int SagenAndArschinInSantimetr(int sag, int arsch) {
    const double metrInSag = 2.16;
    const double metrInArsch = 2.16 / 3;
    int santimetr = ((int)(sag * metrInSag * 100) + (int)(arsch * metrInArsch * 100)) % 100;
    return santimetr;

}

int main()
{
    //Изменение кодировки консоли:
    system("chcp 1251 > nul");
    int sagen;
    int arschin;
    cout << "Введите кол-во саженей: ";
    cin >> sagen;
    cout << "и аршин: ";
    cin >> arschin;
    cout << "В " << sagen << " саженях и " << arschin << " аршинах " << SagenAndArschinInMetr(sagen, arschin) 
        << " метров и " << SagenAndArschinInSantimetr(sagen, arschin) << " сантиметров." << endl;
        //Задержка консольного окна:
    system("pause > nul");
    return 0;
}