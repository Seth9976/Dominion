// 函数: _Z15IsValidSaveNameRK7XStringS1_
// 地址: 0xb326ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((XString::IsEmpty() & 1) != 0)
    return 0

if ((XString::operator==(arg1) & 1) == 0)
    void* x0_4 = GetActiveProfile()
    
    if (*(x0_4 + 0x7558) s>= 1)
        int64_t i = 0
        void* __saved_x1 = x0_4 + 0x6f58
        int32_t x0_10
        
        do
            x0_10 = strcasecmp(XString::operator char const*(), XString::operator char const*())
            
            if (x0_10 == 0)
                break
            
            i += 1
            __saved_x1 += 0x18
        while (i s< sx.q(*(x0_4 + 0x7558)))
        
        return zx.q(x0_10 != 0 ? 1 : 0)

return 1
