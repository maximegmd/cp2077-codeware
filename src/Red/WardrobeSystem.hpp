#pragma once

#include "Addresses.hpp"

namespace Raw::WardrobeSystem
{
using ItemStore = Core::OffsetPtr<0x48, Red::HashMap<Red::CName, Red::ItemID>>;
using ItemStoreMutex = Core::OffsetPtr<0xF4, Red::SharedMutex>;
}
