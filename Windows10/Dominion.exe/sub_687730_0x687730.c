// 函数: sub_687730
// 地址: 0x687730
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8
int32_t result
char const* const ecx

if (arg1 s<= 0)
    char const* const var_4 = "XMalloc"
    var_8 = 0x3d
    ecx = "size > 0"
else if (arg1 s< 0x77359400)
    result = _aligned_malloc(arg1, 0x10)
    
    if (result != 0)
        return result
    
    char const* const var_4_2 = "XMalloc"
    var_8 = 0x57
    ecx = "pBuffer"
else
    char const* const var_4_1 = "XMalloc"
    var_8 = 0x3e
    ecx = "size < 2000000000"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\xMemory.cpp", var_8, "XMalloc")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
