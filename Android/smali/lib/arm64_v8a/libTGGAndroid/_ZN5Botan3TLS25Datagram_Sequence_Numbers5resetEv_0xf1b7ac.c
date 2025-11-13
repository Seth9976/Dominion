// 函数: _ZN5Botan3TLS25Datagram_Sequence_Numbers5resetEv
// 地址: 0xf1b7ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
*(entry_x0 + 0x10)
std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, uint64_t>, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, uint64_t>, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, uint64_t> > >::destroy(
    entry_x0 + 8)
*(entry_x0 + 8) = entry_x0 + 0x10
*(entry_x0 + 0x10) = 0
*(entry_x0 + 0x18) = 0
std::__ndk1::__tree_node_base<void*>* x0_1 = operator new(0x30)
*(x0_1 + 0x20) = 0
*(x0_1 + 0x28) = 0
*x0_1 = 0
*(x0_1 + 8) = 0
*(x0_1 + 0x10) = entry_x0 + 0x10
*(entry_x0 + 8) = x0_1
*(entry_x0 + 0x10) = x0_1
int64_t result =
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(x0_1, x0_1)
*(entry_x0 + 0x18) += 1
*(x0_1 + 0x28) = 0
*(entry_x0 + 0x20) = 0
*(entry_x0 + 0x28) = 0
*(entry_x0 + 0x30) = 0
return result
