// 函数: _ZN5Botan11Hash_Filter7end_msgEv
// 地址: 0xd76998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
entry_x0[0xa]
Botan::Buffered_Computation::final()
int64_t x9 = entry_x0[0xb]
void* result
int64_t var_18
int64_t var_20

if (x9 == 0)
    (*(*entry_x0 + 0x38))(entry_x0, result, var_20 - result)
else
    void* x10_2 = var_20 - result
    void* var_30 = x10_2
    void* x8_2
    
    if (x10_2 u< x9)
        x8_2 = &var_30
    else
        x8_2 = &entry_x0[0xb]
    
    if (x10_2 u< *x8_2)
        int64_t* x0_4 = Botan::assertion_failure("length <= in.size()", &data_793a18, "send", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x2d93)
        
        if (result != 0)
            void* result_2 = result
            Botan::deallocate_memory(result, var_18 - result, 1)
        
        sub_1101e04(x0_4)
        noreturn
    
    (*(*entry_x0 + 0x38))(entry_x0)

if (result == 0)
    return result

void* result_1 = result
return Botan::deallocate_memory(result, var_18 - result, 1)
