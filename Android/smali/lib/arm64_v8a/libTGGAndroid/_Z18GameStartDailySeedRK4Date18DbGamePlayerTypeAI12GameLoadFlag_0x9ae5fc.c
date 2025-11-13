// 函数: _Z18GameStartDailySeedRK4Date18DbGamePlayerTypeAI12GameLoadFlag
// 地址: 0x9ae5fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameClient* x0 = GetClient()
void var_11f0
int32_t x0_3 = GameStartSetup(GetDailySeedSetup(arg1, zx.q(arg2)), x0, x0 + 0x50a8, &var_11f0, 
    0xffffffff, 0, zx.q(arg3))
void* x0_4 = GetClient()
Date* i

for (i = *(*(x0_4 + 0x75d8) + ((((0xffff00ff & zx.q(*arg1 << 0x10))
        | zx.q(zx.d((*(arg1 + 4)).b) << 8) | zx.q(*(arg1 + 8))) & zx.q(*(x0_4 + 0x75e0))) << 3)); i != 0; 
        i = *(i + 0x28))
    if ((operator!=(arg1, i) & 1) == 0)
        i = zx.q(*(i + 0x10))
        break

void* x0_7 = GetActiveProfile()
uint64_t x23 = (zx.q(i.d) | zx.q(i.d s>> 4)) & zx.q(*(x0_7 + 0x7598))
int32_t* x8_6 = *(*(x0_7 + 0x7590) + (x23 << 3))

if (x8_6 == 0)
label_9ae6ec:
    int32_t* x0_8 = XPooledMalloc(0x10)
    *x0_8 = i.d
    x0_8[1] = x0_3
    *(x0_8 + 8) = *(*(x0_7 + 0x7590) + (x23 << 3))
    (*(x0_7 + 0x7590))[x23] = x0_8
    *(x0_7 + 0x759c) += 1
else
    while (i.d != *x8_6)
        x8_6 = *(x8_6 + 8)
        
        if (x8_6 == 0)
            goto label_9ae6ec
    
    x8_6[1] = x0_3

SaveProfiles()
XString::~XString()
XString::~XString()
return XString::~XString()
