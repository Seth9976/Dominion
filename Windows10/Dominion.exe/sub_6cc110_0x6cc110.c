// 函数: sub_6cc110
// 地址: 0x6cc110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_2 = data_147d1a8

if (eax_2 s<= 0)
    sub_63b870(eax_2, &data_801800, "mGrowCount > 0", "C:\x\ax2017\Engine\xAlloc.h", 0x128, 
        "XTypedAllocator<struct RTreeNode>::Grow")
    
    if (sub_63bc30() == 0)
        noreturn sub_63bb00() __tailcall
    
    breakpoint

int32_t* result = sub_687730(eax_2 * 0x24 + 4)
*result = data_147d1a4
int32_t i = 0
int32_t* result_1 = data_147d1a0
data_147d1a4 = result

if (data_147d1a8 s> 0)
    result = &result[1]
    
    do
        *result = result_1
        i += 1
        result_1 = result
        result = &result[9]
    while (i s< data_147d1a8)

data_147d1a0 = result_1
return result
