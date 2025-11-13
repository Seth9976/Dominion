// 函数: _ZN5Botan8GCM_Mode12key_scheduleEPKhm
// 地址: 0xd8159c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x28), arg2)
int64_t* x0_1 = operator new(0x10)
*x0_1 = 0
x0_1[1] = 0
int64_t* x0_2 = *(arg1 + 0x28)
(*(*x0_2 + 0x40))(x0_2, x0_1, 0x10)
int64_t* x0_3 = Botan::allocate_memory(0x10, 1)
*x0_3 = 0
x0_3[1] = 0
int64_t* x0_4 = *(arg1 + 0x28)
(*(*x0_4 + 0x30))(x0_4, x0_3, x0_3, 0x10)
Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x30), x0_3)
Botan::deallocate_memory(x0_3, 0x10, 1)
return operator delete(x0_1) __tailcall
