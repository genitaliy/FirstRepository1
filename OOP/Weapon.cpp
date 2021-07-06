
#include "Weapon.h"

void Weapon::Attact(int count, int time)
{
	for (int i; i < count; i++)
	{
		OneUse();
	}
}
