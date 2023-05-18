class ExpansionMilkBottle: WaterBottle
{
	override bool CanHaveWetness()
	{
		return true;
	}
};
class Expansion_FoodBase: Edible_Base
{
    override bool CanHaveWetness()
	{
		return true;
	}
};
    class JPC_Bottle_Base: Canteen
{
    override bool CanHaveWetness()
	{
		return true;
	}
};