// 函数: sub_6cd210
// 地址: 0x6cd210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = data_147d2d0

if (eax_1 s<= 0)
    sub_63b870(eax_1, &data_801800, "mGrowCount > 0", "C:\x\ax2017\Engine\xAlloc.h", 0x128, 
        "XTypedAllocator<struct SphereTreeNode>::Grow")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t* result = sub_687730(eax_1 * 0x1c + 4)
*result = data_147d2cc
int32_t i = 0
int32_t* result_1 = data_147d2c8
data_147d2cc = result

if (data_147d2d0 s> 0)
    result = &result[1]
    
    do
        *result = result_1
        i += 1
        result_1 = result
        result = &result[7]
    while (i s< data_147d2d0)

data_147d2c8 = result_1
return result
