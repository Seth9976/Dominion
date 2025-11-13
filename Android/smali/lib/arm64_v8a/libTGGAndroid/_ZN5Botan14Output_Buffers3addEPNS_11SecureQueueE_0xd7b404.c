// 函数: _ZN5Botan14Output_Buffers3addEPNS_11SecureQueueE
// 地址: 0xd7b404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x19
void* var_8 = entry_x19
int64_t entry_x1

if (entry_x1 == 0)
    Botan::assertion_failure("queue", "queue was provided", "add", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa195)
else
    int64_t x9_1 = *(arg1 + 0x28)
    
    if (x9_1 u< 0x1fffffffffffffff)
        int64_t* x8 = *(arg1 + 8)
        int64_t x10 = *(arg1 + 0x10)
        int64_t x10_4
        
        if (x10 == x8)
            x10_4 = 0
        else
            x10_4 = ((x10 - x8) << 6) - 1
        
        int64_t x9_2 = *(arg1 + 0x20) + x9_1
        
        if (x10_4 == x9_2)
            std::__ndk1::deque<std::__ndk1::unique_ptr<Botan::SecureQueue, std::__ndk1::default_delete<Botan::SecureQueue> >, std::__ndk1::allocator<std::__ndk1::unique_ptr<Botan::SecureQueue, std::__ndk1::default_delete<Botan::SecureQueue> > > >::__add_back_capacity()
            x8 = *(arg1 + 8)
            x9_2 = *(arg1 + 0x20) + *(arg1 + 0x28)
        
        *(*(x8 + (x9_2 u>> 6 & 0x3fffffffffffff8)) + ((x9_2 & 0x1ff) << 3)) = entry_x1
        *(arg1 + 0x28) += 1
        return 

int64_t* x0_1 = Botan::assertion_failure("m_buffers.size() < m_buffers.max_size()", 
    "Room was available in container", "add", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa198)
Botan::SecureQueue::~SecureQueue()
operator delete(entry_x19)
sub_1101e04(x0_1)
noreturn
