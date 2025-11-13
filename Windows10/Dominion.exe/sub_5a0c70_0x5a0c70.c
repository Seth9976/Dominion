// 函数: sub_5a0c70
// 地址: 0x5a0c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_1597e3c
int32_t eax = ecx - 1

if (eax s>= 0)
    int32_t* esi_3 = (eax << 4) + data_1597e38
    int32_t temp0_1
    
    do
        if (eax s>= ecx)
            sub_63b870(eax, &data_801800, "index >= 0 && index < mSize", 
                "C:\x\ax2017\Engine\xDynArray.h", 0xd4, 
                "XDynArray<struct DomLogDecision>::operator []")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (arg1 == 0xffffffff || *esi_3 == arg1)
            int32_t edx
            edx.b = esi_3[3] s<= *((arg1 << 2) + &data_1597e50)
            *arg2 = edx + 1
            return esi_3[1]
        
        esi_3 -= 0x10
        temp0_1 = eax
        eax -= 1
    while (temp0_1 - 1 s>= 0)

return 0xffffffff
