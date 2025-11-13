// 函数: _ZNSt6__ndk16__treeIN5Botan3OIDENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE
// 地址: 0xf57888
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1

if (entry_x1 == 0)
    return 

int64_t lr
int64_t var_20 = lr
void* x19 = entry_x1
*entry_x1
std::__ndk1::__tree<Botan::OID, std::__ndk1::less<Botan::OID>, std::__ndk1::allocator<Botan::OID> >::destroy(
    arg1)
*(x19 + 8)
std::__ndk1::__tree<Botan::OID, std::__ndk1::less<Botan::OID>, std::__ndk1::allocator<Botan::OID> >::destroy(
    arg1)
void* x0_1 = *(x19 + 0x28)
*(x19 + 0x20) = _vtable_for_Botan::OID + 0x10

if (x0_1 != 0)
    *(x19 + 0x30) = x0_1
    operator delete(x0_1)

return operator delete(x19) __tailcall
