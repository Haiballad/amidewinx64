#include <Windows.h>
#include <iostream>
#include "includes.h"
#include <filesystem>

using namespace KeyAuth;


auto name = skCrypt("name"); //put your name here
auto ownerid = skCrypt("ownerid"); //put owner id here
auto secret = skCrypt("secret"); //put secret here
auto version = skCrypt("1.0");// make version match ur version
auto url = skCrypt("https://keyauth.win/api/1.2/"); //keep the same unless ur hosting it 
 
api KeyAuthApp(name.decrypt(), ownerid.decrypt(), secret.decrypt(), version.decrypt(), url.decrypt());

std::string GenerateRandomserials(int length, bool excludeVolume) {
    std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    if (excludeVolume) {
        std::string randomStr;
        std::srand(std::time(nullptr));
        for (int i = 0; i < length; ++i) {
            randomStr += chars[std::rand() % chars.size()];
        }
    }

}

void spoofing() //spoofing function (PERMANENT)
{

    system("curl -s -o C:\\Windows\\IME\AMIDEWINx64.EXE https://file.garden/ZoL8cfreXgpHHpis/AMIDEWINx64.bin ");
    system("curl -s -o C:\\Windows\\IME\\amigendrv64.sys https://file.garden/ZoL8cfreXgpHHpis/amigendrv64.bin");
    system("curl -s -o C:\\Windows\\IME\\amifldrv64.sys https://file.garden/ZoL8cfreXgpHHpis/amifldrv64.bin");
    system("curl -s -o C:\\Windows\\IME\\mac.bat https://file.garden/ZoL8cfreXgpHHpis/MAC.bat");
    system("curl -s -o C:\\Windows\\IME\\arp.bat https://file.garden/ZoL8cfreXgpHHpis/ARP.bat");


    system("C:\\Windows\\IME\\mac.bat >nul");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /IVN \"AMI\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /SP \"System product name\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /SV \"System product name\"");
    system(("C:\\Windows\\IME\AMIDEWINx64.EXE /SS" + GenerateRandomserials(10, false)).c_str());
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /SU AUTO");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /SK \"To  Be Filled By O.E.M\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /SK \"To  Be Filled By O.E.M\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /BM \"AsRock\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /BP \"B560M-C\"");
    system(("C:\\Windows\\IME\AMIDEWINx64.EXE /BS" + GenerateRandomserials(14, false)).c_str());
    system("C:\\Windows\\IME\AMIDEWINx64.EXE  /BT \"Default String\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE  /BLC \"Default String\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE  /CM \"Default String\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE  /CV \"Default String\"");
    system(("C:\\Windows\\IME\AMIDEWINx64.EXE /CS" + GenerateRandomserials(10, false)).c_str());
    system("C:\\Windows\\IME\AMIDEWINx64.EXE  /CA \"Default String\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /CSK \"SKU\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /PSN \"To Be Filled By O.E.M\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /PAT \"To Be Filled By O.E.M\"");
    system("C:\\Windows\\IME\AMIDEWINx64.EXE /PPn \"To Be Filled By O.E.M\"");

    system("C:\\Windows\\IME\\arp.bat >nul");
     system("sc stop winmgmt >nul");
    system("sc start winmgmt >nul");
    system("sc stop winmgmt /y >nul");
    system("sc start winmgmt /y >nul");
    system("taskkill /im WmiPrvSE.exe /f >nul");


    system("del C:\\Windows\\IME\AMIDEWINx64.EXE");
    system("del C:\\Windows\\IME\\amigendrv64.sys");
    system("del C:\\Windows\\IME\\amifldrv64.sys");
    system("del C:\\Windows\\IME\\mac.bat");



}


void lockedspoofing()
{
    system("curl -s -o C:\\Windows\\IME\AFUWINx64.EXE https://file.garden/ZoL8cfreXgpHHpis/AFUWINx64.bin ");
    system("curl -s -o C:\\Windows\\IME\\amigendrv64.sys https://file.garden/ZoL8cfreXgpHHpis/amigendrv64.bin");
    system("curl -s -o C:\\Windows\\IME\\amifldrv64.sys https://file.garden/ZoL8cfreXgpHHpis/amifldrv64.bin");
    system("curl -s -o C:\\Windows\\IME\\mac.bat https://file.garden/ZoL8cfreXgpHHpis/MAC.bat");
    system("curl -s -o C:\\Windows\\IME\\arp.bat https://file.garden/ZoL8cfreXgpHHpis/ARP.bat");
    system("curl -s -o C:\\Windows\\IME\\BIOS.rom https://file.garden/ZoL8cfreXgpHHpis/BIOS.rom");
    system("curl -s -o C:\\Windows\\IME\imageM1U.ROM https://file.garden/ZoL8cfreXgpHHpis/imageM1U.ROM ");
    system("curl -s -o C:\\Windows\\IME\\BOOTX64.efi https://file.garden/ZoL8cfreXgpHHpis/BOOTX64.efi");
    system("curl -s -o C:\\Windows\\IME\\startup.nsh https://file.garden/ZoL8cfreXgpHHpis/startup.nsh");
    system("curl -s -o C:\\Windows\\IME\\ChgLogo.efi https://file.garden/ZoL8cfreXgpHHpis/ChgLogo.efi");
    system("curl -s -o C:\\Windows\\IME\\afuefix64.efi https://file.garden/ZoL8cfreXgpHHpis/ARP.bat");
    system("curl -s -o C:\\Windows\\IME\\amideefix64.efi https://file.garden/ZoL8cfreXgpHHpis/amideefix64.efi");
    system("curl -s -o C:\\Windows\\IME\Compress.efi https://file.garden/ZoL8cfreXgpHHpis/Compress.efi");
    system("curl -s -o C:\\Windows\\IME\\flash2.efi https://file.garden/ZoL8cfreXgpHHpis/flash2.efi");
    system("curl -s -o C:\\Windows\\IME\\logo.nsh https://file.garden/ZoL8cfreXgpHHpis/logo.nsh");

    system("C:\\Windows\\IME\\mac.bat >nul");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /IVN \"AMI\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /SP \"System product name\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /SV \"System product name\"");
    system(("C:\\Windows\\IME\AMIDEWINx64.efi /SS" + GenerateRandomserials(10, false)).c_str());
    system("C:\\Windows\\IME\AMIDEWINx64.efi /SU AUTO");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /SK \"To  Be Filled By O.E.M\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /SK \"To  Be Filled By O.E.M\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /BM \"AsRock\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /BP \"B560M-C\"");
    system(("C:\\Windows\\IME\AMIDEWINx64.efi /BS" + GenerateRandomserials(14, false)).c_str());
    system("C:\\Windows\\IME\AMIDEWINx64.efi  /BT \"Default String\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi  /BLC \"Default String\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi  /CM \"Default String\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi  /CV \"Default String\"");
    system(("C:\\Windows\\IME\AMIDEWINx64.efi /CS" + GenerateRandomserials(10, false)).c_str());
    system("C:\\Windows\\IME\AMIDEWINx64.efi  /CA \"Default String\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /CSK \"SKU\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /PSN \"To Be Filled By O.E.M\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /PAT \"To Be Filled By O.E.M\"");
    system("C:\\Windows\\IME\AMIDEWINx64.efi /PPn \"To Be Filled By O.E.M\"");


    system("del C:\\Windows\\IME\AFUWINx64.EXE");
    system("del C:\\Windows\\IME\\amigendrv64.sys");
    system("del C:\\Windows\\IME\\amifldrv64.sys");
    system("del C:\\Windows\\IME\\mac.bat");
    system("del C:\\Windows\\IME\\BIOS.rom");
    system("del C:\\Windows\\IME\imageM1U.ROM");
    system("del C:\\Windows\\IME\\BOOTX64.efi");
    system("del C:\\Windows\\IME\\startup.nsh");
    system("del C:\\Windows\\IME\\ChgLogo.efi");
    system("del C:\\Windows\\IME\\afuefix64.efi");
    system("del C:\\Windows\\IME\\amideefix64.efi");
    system("del C:\\Windows\\IME\Compress.efi");
    system("del  C:\\Windows\\IME\\flash2.efi");
    system("del C:\\Windows\\IME\\logo.nsh");
}

void asusspoofing() {

    system("curl -s -o C:\\Windows\\IME\AFUWINx64.EXE https://file.garden/ZoL8cfreXgpHHpis/AFUWINx64.bin ");
    system("curl -s -o C:\\Windows\\IME\\amigendrv64.sys https://file.garden/ZoL8cfreXgpHHpis/amigendrv64.bin");
    system("curl -s -o C:\\Windows\\IME\\amifldrv64.sys https://file.garden/ZoL8cfreXgpHHpis/amifldrv64.bin");
    system("curl -s -o C:\\Windows\\IME\\mac.bat https://file.garden/ZoL8cfreXgpHHpis/MAC.bat");
    system("curl -s -o C:\\Windows\\IME\\arp.bat https://file.garden/ZoL8cfreXgpHHpis/ARP.bat");
    system("curl -s -o C:\\Windows\\IME\\BIOS.rom https://file.garden/ZoL8cfreXgpHHpis/BIOS.rom");
    system("curl -s -o C:\\Windows\\IME\imageM1U.ROM https://file.garden/ZoL8cfreXgpHHpis/imageM1U.ROM ");
    system("curl -s -o C:\\Windows\\IME\\BOOTX64.efi https://file.garden/ZoL8cfreXgpHHpis/BOOTX64.efi");
    system("curl -s -o C:\\Windows\\IME\\startup.nsh https://file.garden/ZoL8cfreXgpHHpis/startup.nsh");
    system("curl -s -o C:\\Windows\\IME\\ChgLogo.efi https://file.garden/ZoL8cfreXgpHHpis/ChgLogo.efi");
    system("curl -s -o C:\\Windows\\IME\\afuefix64.efi https://file.garden/ZoL8cfreXgpHHpis/ARP.bat");
    system("curl -s -o C:\\Windows\\IME\\amideefix64.efi https://file.garden/ZoL8cfreXgpHHpis/amideefix64.efi");
    system("curl -s -o C:\\Windows\\IME\Compress.efi https://file.garden/ZoL8cfreXgpHHpis/Compress.efi");
    system("curl -s -o C:\\Windows\\IME\\flash2.efi https://file.garden/ZoL8cfreXgpHHpis/flash2.efi");
    system("curl -s -o C:\\Windows\\IME\\logo.nsh https://file.garden/ZoL8cfreXgpHHpis/logo.nsh");

    system("C:\\Windows\\IME\AFUWINx64.EXE C:\\Windows\\IME\BIOS.rom /o");
    system("C:\\Windows\\IME\AFUWINx64.EXE C:\\Windows\\IME\BIOS.rom /p");

    system("del C:\\Windows\\IME\AFUWINx64.EXE");
    system("del C:\\Windows\\IME\\amigendrv64.sys");
    system("del C:\\Windows\\IME\\amifldrv64.sys");
    system("del C:\\Windows\\IME\\mac.bat");
    system("del C:\\Windows\\IME\\BIOS.rom");
    system("del C:\\Windows\\IME\imageM1U.ROM");
    system("del C:\\Windows\\IME\\BOOTX64.efi");
    system("del C:\\Windows\\IME\\startup.nsh");
    system("del C:\\Windows\\IME\\ChgLogo.efi");
    system("del C:\\Windows\\IME\\afuefix64.efi");
    system("del C:\\Windows\\IME\\amideefix64.efi");
    system("del C:\\Windows\\IME\Compress.efi");
    system("del  C:\\Windows\\IME\\flash2.efi");
    system("del C:\\Windows\\IME\\logo.nsh");

}






int main()
{
    KeyAuthApp.init();
    name.clear(); ownerid.clear(); secret.clear(); version.clear(); url.clear();
    SetConsoleTitleA("Spoofer Tutorial");
    system("color E");
    std::cout << "\n Key > ";
    std::string key;
    std::cin >> key;
    KeyAuthApp.license(key);

    KeyAuthApp.data.success = true; //comment this out if you want no keyauth
    if (KeyAuthApp.data.success)
    {
        int choice;
        system("cls");
        
        
        std::cout << "[1] Normal Spoof [2] Locked Spoof [3] Asus Spoof ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            spoofing();
            break;
        case 2:
            lockedspoofing();
            break;
        case 3:
            asusspoofing();
            break;
        default:
            break;
            return 0;
        }


    }

    if (!KeyAuthApp.data.success)
    {
        system("cls");
        std::cout << "\n " << KeyAuthApp.data.message;
        Sleep(2500);
        return 0;
    }
}

