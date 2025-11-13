// 函数: _ZNK5Botan14PKCS10_Request18subject_public_keyEv
// 地址: 0xea603c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::PKCS10_Request::data()
void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_38
Botan::DataSource_Memory::DataSource_Memory(&var_38)
int64_t result = Botan::X509::load_key(&var_38)
var_38 = _vtable_for_Botan::DataSource_Memory + 0x10
void* var_30

if (var_30 != 0)
    void* var_28_1 = var_30
    int64_t var_20
    Botan::deallocate_memory(var_30, var_20 - var_30, 1)

return result
