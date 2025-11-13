// 函数: sub_6e0a60
// 地址: 0x6e0a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg1[2]

if (eax s<= 0)
    sub_63b870(eax, &data_801800, "mGrowCount > 0", "C:\x\ax2017\Engine\xAlloc.h", 0x128, 
        "XTypedAllocator<struct StructureAnim>::Grow")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* result = sub_687730(eax * 0x314 + 4)
*result = arg1[1]
int32_t i = 0
int32_t* result_1 = *arg1
arg1[1] = result

if (arg1[2] s> 0)
    result = &result[1]
    
    do
        *result = result_1
        i += 1
        result_1 = result
        result = &result[0xc5]
    while (i s< arg1[2])

*arg1 = result_1
return result
