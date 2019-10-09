#include <string>
#include <BWAPI4/UnitSizeType.h>

namespace BWAPI4
{
  template <>
  const std::string Type<UnitSizeType, UnitSizeTypes::Enum::Unknown>::typeNames[UnitSizeTypes::Enum::MAX] =
  {
    "Independent",
    "Small",
    "Medium",
    "Large",
    "None",
    "Unknown"  
  };
  namespace UnitSizeTypeSet
  {
    using namespace UnitSizeTypes::Enum;
    const UnitSizeType::set unitSizeTypeSet = { Independent, Small, Medium, Large, None, Unknown };
  }
  const UnitSizeType::set& UnitSizeTypes::allUnitSizeTypes()
  {
    return UnitSizeTypeSet::unitSizeTypeSet;
  }
}

