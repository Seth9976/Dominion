// 函数: _Z18GetDailySeedResultRK4Date
// 地址: 0x9b6320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
Date* x20 = *(*(x0 + 0x75d8) + ((((0xffff00ff & zx.q(*arg1 << 0x10))
    | zx.q(zx.d((*(arg1 + 4)).b) << 8) | zx.q(*(arg1 + 8))) & zx.q(*(x0 + 0x75e0))) << 3))
int32_t x19_1

if (x20 == 0)
label_9b6374:
    x19_1 = 0
else
    while (true)
        if ((operator!=(arg1, x20) & 1) == 0)
            x19_1 = *(x20 + 0x10)
            break
        
        x20 = *(x20 + 0x28)
        
        if (x20 == 0)
            goto label_9b6374

void* x0_3 = GetActiveProfile()

for (int32_t* i =
        *(*(x0_3 + 0x7740) + (((zx.q(x19_1) | zx.q(x19_1 s>> 4)) & zx.q(*(x0_3 + 0x7748))) << 3)); i != 0; 
        i = *(i + 0x20))
    if (x19_1 == *i)
        return &i[1]

return 0
