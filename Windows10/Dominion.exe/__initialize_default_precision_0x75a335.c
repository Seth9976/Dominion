// 函数: __initialize_default_precision
// 地址: 0x75a335
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

errno_t result = _controlfp_s(nullptr, 0x10000, 0x30000)

if (result == 0)
    return result

sub_75a095(7)
breakpoint
