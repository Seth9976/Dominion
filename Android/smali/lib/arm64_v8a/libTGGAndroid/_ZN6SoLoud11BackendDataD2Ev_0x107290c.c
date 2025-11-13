// 函数: _ZN6SoLoud11BackendDataD2Ev
// 地址: 0x107290c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
entry_x0[0x10].d += 1

while (entry_x0[0x10].d == 1)
    SoLoud::Thread::sleep(0xa)

int64_t* x0 = entry_x0[8]

if (x0 != 0)
    (*(*x0 + 0x30))()

int64_t* x0_1 = entry_x0[2]

if (x0_1 != 0)
    (*(*x0_1 + 0x30))()

int64_t* x0_2 = *entry_x0

if (x0_2 != 0)
    (*(*x0_2 + 0x30))()

void* x0_3 = entry_x0[0xd]

if (x0_3 != 0)
    operator delete[](x0_3)

void* result = entry_x0[0xe]

if (result == 0)
    return result

return operator delete[](result) __tailcall
