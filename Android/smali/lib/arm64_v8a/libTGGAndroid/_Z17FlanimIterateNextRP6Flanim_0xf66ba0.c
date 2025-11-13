// 函数: _Z17FlanimIterateNextRP6Flanim
// 地址: 0xf66ba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Flanim* x10 = *arg1
int64_t* x9 = *(*gpGameData + 0x18)
void* i_1
void* __offset(Flanim, 0xa8) i

if (x10 == 0)
    i_1 = *x9
    i = i_1
else
    i_1 = *x9
    i = x10 + 0xa8

for (; i u< i_1 + zx.q(x9[1].d) * 0xa8; i += 0xa8)
    if (*(i + 0xa0) u>= 0x10000)
        *arg1 = i
        
        if (zx.d(*(i + 0x88)) == 0)
            return 1
        
        while (true)
            i += 0xa8
            int64_t x8_5 = *x9 + zx.q(x9[1].d) * 0xa8
            
            if (x8_5 u<= i)
                break
            
            while (zx.d(*(i + 0xa2)) == 0)
                i += 0xa8
                
                if (i u>= x8_5)
                    goto label_f66bf8
            
            *arg1 = i
            
            if (zx.d(*(i + 0x88)) == 0)
                return 1
        
        break

label_f66bf8:
*arg1 = 0xffffffff
return 0
