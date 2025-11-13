// 函数: _Z11SplitStringRK7XStringcPS_i
// 地址: 0xb94fac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = XString::GetString()
char* x22_1

if (x0 != 0)
    x22_1 = x0

uint64_t x19

if (x0 == 0 || zx.d(*x0) == 0)
    x19 = 0
else
    x19 = 0
    XString* x23_1 = arg3
    
    do
        void* x0_2 = strchr(x22_1, zx.q(arg2))
        
        if (x0_2 == 0)
            XString::operator=(arg3 + (zx.q(x19.d) << 3))
            x19 = zx.q(x19.d + 1)
            break
        
        char var_38
        XString::XString(&var_38, x22_1)
        XString::operator=(x23_1)
        XString::~XString()
        x22_1 = x0_2 + 1
        uint32_t x8_3 = zx.d(*x22_1)
        
        if (x8_3 == 0xd || x8_3 == 0xa)
            x22_1 = x0_2 + 2
        
        x19 += 1
        x23_1 += 8
    while (zx.d(*x22_1) != 0)

return zx.q(x19.d)
