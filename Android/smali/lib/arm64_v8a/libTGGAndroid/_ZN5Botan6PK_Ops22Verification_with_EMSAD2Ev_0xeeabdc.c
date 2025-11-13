// 函数: _ZN5Botan6PK_Ops22Verification_with_EMSAD2Ev
// 地址: 0xeeabdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
uint32_t x8 = zx.d(entry_x0[2].b)
*entry_x0 = _vtable_for_Botan::PK_Ops::Verification_with_EMSA + 0x10

if ((x8 & 1) != 0)
    operator delete(entry_x0[4])

int64_t* result = entry_x0[1]
entry_x0[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
