#include <string>
#include <BWAPI4/DamageType.h>

namespace BWAPI4
{
  template <>
  const std::string Type<DamageType, DamageTypes::Enum::Unknown>::typeNames[DamageTypes::Enum::MAX] =
  {
    "Independent",
    "Explosive",
    "Concussive",
    "Normal",
    "Ignore_Armor",
    "None",
    "Unknown"
  };

  namespace DamageTypes
  {
    static const DamageType::set typeSet = {
      Enum::Independent, Enum::Explosive, Enum::Concussive, Enum::Normal, Enum::Ignore_Armor, Enum::None, Enum::Unknown
    };
  }
  const DamageType::set& DamageTypes::allDamageTypes()
  {
    return DamageTypes::typeSet;
  }
}
