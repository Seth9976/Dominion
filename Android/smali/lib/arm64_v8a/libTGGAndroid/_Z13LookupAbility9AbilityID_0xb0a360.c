// 函数: _Z13LookupAbility9AbilityID
// 地址: 0xb0a360
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_i
void* entry_i_1 = entry_i
uint64_t x8 = zx.q(*(gDomClient + 0x205e8))

if (x8.d != 0)
    void* entry_i_2 = *(gDomClient + 0x205e0)
    entry_i = entry_i_2
    
    do
        if (zx.d(*(entry_i + 0x21d2)) != 0)
            while (entry_i != 0xffffffff)
                if (*(entry_i + 0x2c) == 5)
                    if ((operator!=(zx.q(*(entry_i + 0x1f4)), zx.q(arg1)) & 1) == 0)
                        return entry_i
                    
                    entry_i_2 = *(gDomClient + 0x205e0)
                    x8 = zx.q(*(gDomClient + 0x205e8))
                
                if (entry_i == 0)
                    entry_i = entry_i_2
                else
                    entry_i += 0x21d8
                
                void* x10_3 = entry_i_2 + mulu.dp.d(x8.d, 0x21d8)
                
                if (entry_i u>= x10_3)
                    break
                
                while (zx.d(*(entry_i + 0x21d2)) == 0)
                    entry_i += 0x21d8
                    
                    if (entry_i u>= x10_3)
                        goto label_b0a444
            
            break
        
        entry_i += 0x21d8
    while (entry_i u< entry_i_2 + x8 * 0x21d8)

label_b0a444:
pthread_kill(pthread_self(), 6)
XNoReturn()
return entry_i
