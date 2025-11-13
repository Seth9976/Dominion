// 函数: _ZN5Botan4PipeC1ESt16initializer_listIPNS_6FilterEE
// 地址: 0xd7b654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
int64_t* x20 = entry_x1
Botan::Filter* x19 = arg1
*arg1 = _vtable_for_Botan::Pipe + 0x10
*(arg1 + 0x10) = 0
int64_t result = operator new(0x38)
__builtin_memset(result, 0, 0x38)
*(x19 + 8) = 0
*(x19 + 0x10) = result
*(x19 + 0x18) = 0
*(x19 + 0x20) = 0
int64_t entry_x2

if (entry_x2 != 0)
    int64_t i_1 = entry_x2 << 3
    int64_t i
    
    do
        *x20
        result = Botan::Pipe::do_append(x19)
        i = i_1
        i_1 -= 8
        x20 = &x20[1]
    while (i != 8)

return result
