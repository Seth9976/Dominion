// 函数: _Z13TutorialClickRK12UI2ClickInfo
// 地址: 0xba003c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
int64_t var_18
XString::XString(&var_18)
int32_t x0_2 = operator==(x20, &var_18)
XString::~XString()

if ((x0_2 & 1) != 0 && *(GetClient() + 0x5068) != 0 && *(GetClient() + 0x5068) == 1)
    int32_t x0_7 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
    
    if (*(gDomClient + 0x205cc) s< x0_7 && var_18 != 0)
        TutorialContinue()

char* x19_1 = *(arg1 + 8)
XString::XString(&var_18)
int32_t x0_10 = operator==(x19_1, &var_18)
XString::~XString()

if ((x0_10 & 1) != 0 && *(GetClient() + 0x5068) != 0 && *(GetClient() + 0x5068) == 1)
    int32_t x0_15 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
    
    if (*(gDomClient + 0x205cc) s< x0_15 && var_18 != 0)
        TutorialContinue()

return 0
