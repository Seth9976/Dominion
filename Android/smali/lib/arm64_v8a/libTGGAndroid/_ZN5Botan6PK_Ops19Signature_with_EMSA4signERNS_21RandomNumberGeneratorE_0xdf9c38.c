// 函数: _ZN5Botan6PK_Ops19Signature_with_EMSA4signERNS_21RandomNumberGeneratorE
// 地址: 0xdf9c38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 8)
*(arg1 + 0x28) = 0
(*(*x0 + 0x18))()
int64_t* x22 = *(arg1 + 8)
void* result_1
int64_t entry_x1
(*(*x22 + 0x20))(x22, &result_1, (*(*arg1 + 0x38))(arg1), entry_x1)
void* var_60
int64_t var_58
(*(*arg1 + 0x40))(arg1, var_60, var_58 - var_60, entry_x1)

if (var_60 != 0)
    void* var_58_1 = var_60
    int64_t var_50
    Botan::deallocate_memory(var_60, var_50 - var_60, 1)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, var_38 - result, 1)
