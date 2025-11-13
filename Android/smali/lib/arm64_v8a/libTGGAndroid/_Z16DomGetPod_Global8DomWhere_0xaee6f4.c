// 函数: _Z16DomGetPod_Global8DomWhere
// 地址: 0xaee6f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gDomClient + 0x205e8))
void* i

if (x8.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    int64_t x10_1 = i_1 + x8 * 0x21d8
    i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            while (i != 0xffffffff)
                if (*(i + 0x2c) == 3 && *(i + 0x58) == 0xffffffff && *(i + 0x5c) == arg1
                        && *(i + 0x60) == 0)
                    goto label_aee7c8
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x21d8
                
                if (i u>= x10_1)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x10_1)
                        goto label_aee7c8_1
            
            break
        
        i += 0x21d8
    while (i u< x10_1)

label_aee7c8_1:

do
    pthread_kill(pthread_self(), 6)
    i = XNoReturn()
label_aee7c8:
while (i == 0)

return i
