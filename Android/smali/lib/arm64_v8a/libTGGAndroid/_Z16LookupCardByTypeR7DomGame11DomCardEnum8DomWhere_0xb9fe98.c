// 函数: _Z16LookupCardByTypeR7DomGame11DomCardEnum8DomWhere
// 地址: 0xb9fe98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_i
void* entry_i_1 = entry_i
DomGame& entry_x20
DomGame& var_10 = entry_x20
uint64_t entry_x19
uint64_t var_8 = entry_x19
int64_t (* const x10)() = gDomClient
uint64_t x8 = zx.q(*(gDomClient + 0x205e8))
void* entry_i_3

if (x8.d != 0)
    entry_i_3 = *(gDomClient + 0x205e0)
    int32_t x22_1 = arg3
    entry_x19 = zx.q(arg2)
    entry_x20 = arg1
    entry_i = entry_i_3
    
    do
        if (zx.d(*(entry_i + 0x21d2)) != 0)
            if (entry_i != 0xffffffff)
                if (x22_1 == 0)
                    goto label_b9ffc4
                
                do
                    if (*(entry_i + 0x2c) == 0
                            && *(CardDef(entry_x20, zx.q(*(entry_i + 0x98))) + 0xc0) == entry_x19.d
                            && *(entry_i + 0xa4) == x22_1)
                        return entry_i
                    
                    void* entry_i_2 = *(gDomClient + 0x205e0)
                    
                    if (entry_i == 0)
                        entry_i = entry_i_2
                    else
                        entry_i += 0x21d8
                    
                    int64_t x8_4 = entry_i_2 + zx.q(*(gDomClient + 0x205e8)) * 0x21d8
                    
                    if (entry_i u>= x8_4)
                        break
                    
                    while (zx.d(*(entry_i + 0x21d2)) == 0)
                        entry_i += 0x21d8
                        
                        if (entry_i u>= x8_4)
                            goto label_b9ff9c_1
                while (entry_i != 0xffffffff)
            
            break
        
        entry_i += 0x21d8
    while (entry_i u< entry_i_3 + x8 * 0x21d8)

label_b9ff9c_1:

while (true)
label_b9ff9c:
    pthread_kill(pthread_self(), 6)
    x8, entry_i_3, x10 = XNoReturn()
label_b9ffc4:
    
    do
        if (*(entry_i + 0x2c) == 0)
            if (*(CardDef(entry_x20, zx.q(*(entry_i + 0x98))) + 0xc0) == entry_x19.d)
                return entry_i
            
            entry_i_3 = *(x10 + 0x205e0)
            x8 = zx.q(*(x10 + 0x205e8))
        
        if (entry_i == 0)
            entry_i = entry_i_3
        else
            entry_i += 0x21d8
        
        void* x10_4 = entry_i_3 + mulu.dp.d(x8.d, 0x21d8)
        
        if (entry_i u>= x10_4)
            break
        
        while (zx.d(*(entry_i + 0x21d2)) == 0)
            entry_i += 0x21d8
            
            if (entry_i u>= x10_4)
                goto label_b9ff9c
    while (entry_i != 0xffffffff)
