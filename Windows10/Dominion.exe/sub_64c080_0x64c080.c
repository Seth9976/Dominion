// 函数: sub_64c080
// 地址: 0x64c080
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t* eax = sub_64bfd0(arg2)
eax[3] -= 1

if (arg2 s> 0x400 && eax[4] == 0xffffffff)
    if (arg1 == 0)
        return eax
    
    return _aligned_free(arg1)

int32_t* i_1 = eax[4]
int32_t* i = eax[1]
int32_t esi_2 = eax[2] * i_1
int32_t* i_2 = i_1

while (i != 0)
    void* edx = &i[1]
    i_1 = i
    i = *i
    
    if (arg1 u>= edx)
        i_1 = &i_1[1] + esi_2
        
        if (arg1 u< i_1)
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = sx.q(arg1 - edx)
            i_1 = divs.dp.d(edx_1:eax_4, i_2)
            
            if (mods.dp.d(edx_1:eax_4, i_2) == 0)
                int32_t eax_5 = *eax
                *arg1 = eax_5
                *eax = arg1
                return eax_5

sub_63b870(i_1, &data_801800, "IsPointerFromAllocator(pItem)", "C:\x\ax2017\Engine\xAlloc.h", 0x81, 
    "XAllocator::Free")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
