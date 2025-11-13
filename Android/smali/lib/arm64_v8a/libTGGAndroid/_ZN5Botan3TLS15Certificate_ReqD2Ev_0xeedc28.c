// 函数: _ZN5Botan3TLS15Certificate_ReqD2Ev
// 地址: 0xeedc28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* result = entry_x0[7]
*entry_x0 = _vtable_for_Botan::TLS::Certificate_Req + 0x10

if (result != 0)
    entry_x0[8] = result
    result = operator delete(result)

void* x20 = entry_x0[4]

if (x20 != 0)
    char* x8_1 = entry_x0[5]
    void* x0_1
    
    if (x8_1 == x20)
        x0_1 = x20
    else
        char* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x21_1
        while (x20 != x21_1)
        
        x0_1 = entry_x0[4]
    
    entry_x0[5] = x20
    result = operator delete(x0_1)

void* x22 = entry_x0[1]

if (x22 == 0)
    return result

void** x20_1 = entry_x0[2]
void* x0_3

if (x20_1 == x22)
    x0_3 = x22
else
    do
        x20_1 -= 0x38
        sub_f276a8(&entry_x0[3], x20_1)
    while (x22 != x20_1)
    
    x0_3 = entry_x0[1]

entry_x0[2] = x22
return operator delete(x0_3) __tailcall
