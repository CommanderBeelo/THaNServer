modded class ExpansionMilkBottle : WaterBottle
{
	override bool CanHaveWetness()
	{
		return true;
	}
};
modded class Expansion_FoodBase : Edible_Base
{
    override bool CanHaveWetness()
	{
		return true;
	}
};
modded class JPC_Bottle_Base : Canteen
{
    override bool CanHaveWetness()
	{
		return true;
	}
};