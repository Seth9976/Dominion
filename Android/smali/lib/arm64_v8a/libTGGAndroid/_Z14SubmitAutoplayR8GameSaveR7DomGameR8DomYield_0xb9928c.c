// 函数: _Z14SubmitAutoplayR8GameSaveR7DomGameR8DomYield
// 地址: 0xb9928c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_68

if (*(GetClient() + 0x5068) != 2)
    if (*(GetClient() + 0x5068) == 1)
        int64_t result = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_68)
        
        if (*(gDomClient + 0x205cc) s< result.d && var_68.q != 0)
            return result
    
    uint64_t x0_9 = zx.q(*(arg3 + 0x58))
    *(arg3 + 0x70) = 1
    return SubmitAction(x0_9, arg3)

int32_t x21_1 = *(arg3 + 0x58)
*(arg3 + 0x70) = 1
int64_t* x0_2 = LogGet(arg1, zx.q(x21_1))
x0_2[2].d
XTrace("submit network action who:%d pos:%d")
void* x0_3 = GetClient()
int64_t x25_1 = sx.q(x0_2[2].d)
DomLogWriteAction(x0_2, arg3)
int32_t x8_1 = x0_2[2].d
int64_t x9_1 = *x0_2
int32_t x11_1 = *(x0_3 + 0xc) + 1
*(x0_3 + 0xc) = x11_1
int32_t x10_2 = *arg1
int32_t var_60_1 = x21_1
int32_t var_5c_1 = x25_1.d
int64_t var_58_1 = x9_1 + x25_1
int32_t var_50_1 = x8_1 - x25_1.d
int32_t var_4c_1 = 1
var_68 = x11_1
int32_t var_64_1 = x10_2
int32_t var_48_1 = *arg3
return NetworkSendDef(zx.q(*(x0_3 + 0x14)), 0xf42b0, *defMapGameMoveMsg, &var_68)
