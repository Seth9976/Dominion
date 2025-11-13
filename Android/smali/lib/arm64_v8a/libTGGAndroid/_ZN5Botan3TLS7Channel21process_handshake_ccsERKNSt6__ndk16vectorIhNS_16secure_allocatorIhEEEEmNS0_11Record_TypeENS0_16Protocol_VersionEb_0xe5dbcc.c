// 函数: _ZN5Botan3TLS7Channel21process_handshake_ccsERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEmNS0_11Record_TypeENS0_16Protocol_VersionEb
// 地址: 0xe5dbcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x48)
int32_t x22 = arg4
int64_t x21 = arg3
void* result_1
void* result
int32_t entry_x5

if (x8 != 0)
label_e5dc5c:
    int64_t* x0_4 = *(x8 + 0x10)
    int64_t x1_2 = *arg2
    result = (*(*x0_4 + 0x28))(x0_4, x1_2, *(arg2 + 8) - x1_2, zx.q(x22), x21)
    int32_t x22_1
    int32_t x24_2
    
    do
        void* x22_2 = *(arg1 + 0x48)
        
        if (x22_2 == 0)
            break
        
        int64_t* x0_5 = *(x22_2 + 0x10)
        (*(*x0_5 + 0x30))(x0_5, zx.q(*(x22_2 + 0x18) u>> 0xd) & 1)
        int32_t var_60
        void* result_2
        
        if (var_60 != 0xff)
            (*(*arg1 + 0x18))(arg1, *(arg1 + 0x40), x22_2, var_60, &result_1, zx.q(entry_x5) & 1)
            int64_t x8_13 = *(arg1 + 0x48)
            x22_1 = x8_13 != 0 ? 1 : 0
            
            x24_2 = x8_13 != 0 ? 0 : 5
            
            result = result_1
            
            if (result != 0)
                result_2 = result
                result = operator delete(result)
        else
            x22_1 = 0
            x24_2 = 5
            result = result_1
            
            if (result != 0)
                result_2 = result
                result = operator delete(result)
    while (((x22_1 | (x24_2 == 0 ? 1 : 0)) & 1) != 0)
    return result

if ((arg5.d u>> 8 & 0xff) u< 0xfb || (entry_x5 & 1) != 0)
    result = Botan::TLS::Channel::create_handshake_state(arg1)
else
    int64_t* x0 = *(arg1 + 0x38)
    
    if (x0 == 0)
        result = Botan::TLS::Channel::create_handshake_state(arg1)
    else
        (*(*x0 + 0x48))(x0, x21)
        int64_t* x0_1 = *(arg1 + 0x38)
        
        if (x0_1 == 0)
        label_e5ddb4:
            Botan::assertion_failure("m_sequence_numbers", "Have a sequence numbers object", 
                "sequence_numbers", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                0x13ded)
        label_e5dde4:
            int64_t* x0_9 = Botan::assertion_failure("m_active_state", "Have active state here", 
                "process_handshake_ccs", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13f5a)
            void* result_3 = result_1
            
            if (result_3 != 0)
                void* result_4 = result_3
                operator delete(result_3)
            
            sub_1101e04(x0_9)
            noreturn
        
        uint32_t x25_1 = (x21 u>> 0x30).d
        
        if (x25_1 != zx.d((*(*x0_1 + 0x20))()))
            int64_t* x0_7 = *(arg1 + 0x38)
            
            if (x0_7 == 0)
                goto label_e5ddb4
            
            result = (*(*x0_7 + 0x20))()
            
            if ((result.d & 0xffff) - 1 == x25_1)
                void* x8_18 = *(arg1 + 0x40)
                
                if (x8_18 == 0)
                    goto label_e5dde4
                
                int64_t* x0_8 = *(x8_18 + 0x10)
                int64_t x1_5 = *arg2
                result = (*(*x0_8 + 0x28))(x0_8, x1_5, *(arg2 + 8) - x1_5, zx.q(x22), x21)
        else
            result = Botan::TLS::Channel::create_handshake_state(arg1)

x8 = *(arg1 + 0x48)

if (x8 == 0)
    return result

goto label_e5dc5c
