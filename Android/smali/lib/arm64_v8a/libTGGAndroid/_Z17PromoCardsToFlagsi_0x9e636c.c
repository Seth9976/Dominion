// 函数: _Z17PromoCardsToFlagsi
// 地址: 0x9e636c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_18
int32_t x0 = DomExpGet(0x13, &var_18)

if (x0 s< 1)
    return 0

int64_t i = 0
uint64_t result = 0
int32_t* x11_2 = var_18 + 0xc0

do
    if ((arg1 u>> i.d & 1) != 0)
        uint64_t x13_3 = zx.q(*x11_2 - 0x1300)
        
        if (x13_3.d u<= 0xe)
            switch (x13_3)
                case 0
                    result = zx.q(result.d) | 1
                case 0xa
                    result = zx.q(result.d) | 4
                case 0xb
                    result = zx.q(result.d) | 2
                case 0xe
                    result = zx.q(result.d) | 8
    
    i += 1
    x11_2 = &x11_2[0x1e0]
while (zx.q(x0) != i)

return result
