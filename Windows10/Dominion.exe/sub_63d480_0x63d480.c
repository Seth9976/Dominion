// 函数: sub_63d480
// 地址: 0x63d480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg2 += 1
int32_t eax = *arg2

if (eax u<= 0x7fffffff)
    uint32_t eax_1 = eax * 2
    
    if (eax == neg.d(eax))
        *arg2 -= 1
        return eax_1
    
    if (eax_1 u< 0x1000)
        int32_t eax_5 = operator new(eax_1)
        *arg2 -= 1
        return eax_5
    
    if (eax_1 + 0x23 u> eax_1)
        int32_t eax_2 = operator new(eax_1 + 0x23)
        
        if (eax_2 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* eax_4 = (eax_2 + 0x23) & 0xffffffe0
        *arg2 -= 1
        *(eax_4 - 4) = eax_2
        return eax_4

sub_4f7ee0()
noreturn
