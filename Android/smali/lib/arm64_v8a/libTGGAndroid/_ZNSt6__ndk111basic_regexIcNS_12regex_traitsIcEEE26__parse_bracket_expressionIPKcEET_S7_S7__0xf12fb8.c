// 函数: _ZNSt6__ndk111basic_regexIcNS_12regex_traitsIcEEE26__parse_bracket_expressionIPKcEET_S7_S7_
// 地址: 0xf12fb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >* entry_x2

if (arg2 == entry_x2 || zx.d(*arg2) != 0x5b)
    return arg2

if (&arg2[1] != entry_x2)
    uint32_t x9_1 = zx.d(arg2[1])
    void* x22_1
    
    if (x9_1 == 0x5e)
        x22_1 = &arg2[2]
    else
        x22_1 = &arg2[1]
    
    void** x0 = operator new(0xa8)
    int32_t x9_2 = *(arg1 + 0x18)
    sub_f140d8(x0, arg1, *(*(arg1 + 0x38) + 8), (x9_1 == 0x5e ? 1 : 0).b, x9_2.b & 1, 
        (x9_2 u>> 3).b & 1)
    *(*(arg1 + 0x38) + 8) = x0
    *(arg1 + 0x38) = x0
    
    if (x22_1 != entry_x2)
        if ((zx.d(*(arg1 + 0x18)) & 0x1f0) != 0 && zx.d(*x22_1) == 0x5d)
            sub_f13f08(x0, 0x5d)
            x22_1 += 1
        
        if (x22_1 != entry_x2)
            void* x23_2
            void* x0_3
            
            do
                x23_2 = x22_1
                x0_3 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_expression_term<char const*>(
                    arg1, x22_1, entry_x2)
                x22_1 = x0_3
            while (x0_3 != x23_2)
            
            if (x23_2 != entry_x2)
                if (zx.d(*x23_2) == 0x2d)
                    sub_f13f08(x0, 0x2d)
                    x23_2 += 1
                
                if (x23_2 != entry_x2 && zx.d(*x23_2) == 0x5d)
                    return x23_2 + 1

sub_f15264()
noreturn
