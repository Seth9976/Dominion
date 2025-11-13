// 函数: _ZNSt6__ndk120__bracket_expressionIcNS_12regex_traitsIcEEED2Ev
// 地址: 0xf14340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x20 = entry_x0[0x11]
*entry_x0 =
    _vtable_for_std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> > + 0x10

if (x20 != 0)
    char* x8_1 = entry_x0[0x12]
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
        
        x0_1 = entry_x0[0x11]
    
    entry_x0[0x12] = x20
    operator delete(x0_1)

void* x0_2 = entry_x0[0xe]

if (x0_2 != 0)
    entry_x0[0xf] = x0_2
    operator delete(x0_2)

void* x20_1 = entry_x0[0xb]

if (x20_1 != 0)
    void* x21_2 = entry_x0[0xc]
    void* x0_3
    
    if (x21_2 != x20_1)
        void* x22_1
        
        do
            if ((zx.d(*(x21_2 - 0x18)) & 1) != 0)
                operator delete(*(x21_2 - 8))
                x22_1 = x21_2 - 0x30
                
                if ((zx.d(*(x21_2 - 0x30)) & 1) != 0)
                    operator delete(*(x21_2 - 0x20))
            else
                x22_1 = x21_2 - 0x30
                
                if ((zx.d(*(x21_2 - 0x30)) & 1) != 0)
                    operator delete(*(x21_2 - 0x20))
            
            x21_2 = x22_1
        while (x20_1 != x22_1)
        x0_3 = entry_x0[0xb]
    else
        x0_3 = x20_1
    
    entry_x0[0xc] = x20_1
    operator delete(x0_3)

void* x0_6 = entry_x0[8]

if (x0_6 != 0)
    entry_x0[9] = x0_6
    operator delete(x0_6)

void* x0_7 = entry_x0[5]

if (x0_7 != 0)
    entry_x0[6] = x0_7
    operator delete(x0_7)

std::__ndk1::locale::~locale()
int64_t* result = entry_x0[1]
*entry_x0 = _vtable_for_std::__ndk1::__owns_one_state<char> + 0x10

if (result == 0)
    return result

jump(*(*result + 8))
