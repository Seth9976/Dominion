// 函数: sub_688d40
// 地址: 0x688d40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg1[2]

if (arg2 s<= ecx)
    return 

int32_t var_14_1
int32_t* eax
char const* const ecx_1

if (arg1[1] s> arg2)
    char const* const var_10_1 = "ResizableBufferSetAllocatedLength"
    var_14_1 = 0x2a
    ecx_1 = "buffer.dataLength <= size"
label_688dd2:
    sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Network.cpp", var_14_1, 
        "ResizableBufferSetAllocatedLength")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax = *arg1

if (ecx == 0)
    if (eax == 0)
        *arg1 = sub_64c020(arg2)
        arg1[2] = arg2
        return 
    
    char const* const var_10_2 = "ResizableBufferSetAllocatedLength"
    var_14_1 = 0x33
    ecx_1 = "buffer.dataPtr == NULL"
    goto label_688dd2

if (eax == 0)
    char const* const var_10_4 = "ResizableBufferSetAllocatedLength"
    var_14_1 = 0x39
    ecx_1 = "buffer.dataPtr != NULL"
    goto label_688dd2

int32_t* eax_2 = sub_64c020(arg2)
uint32_t count = arg1[1]

if (count s> 0)
    memcpy(eax_2, *arg1, count)

sub_64c080(*arg1, arg1[2])
*arg1 = eax_2
arg1[2] = arg2
