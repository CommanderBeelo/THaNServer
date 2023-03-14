modded class Clothing
{
    override bool CanPutInCargo( EntityAI parent )
    {
        return CanPutInCargoClothingConditions( parent );
    }
    
    override bool CanReceiveItemIntoCargo( EntityAI item )
    {
        return CanReceiveItemIntoCargoClothingConditions( item );
    }
    
    override bool CanLoadItemIntoCargo(EntityAI item)
    {
        return CanLoadItemIntoCargoClothingConditions( item );
    }

    override bool CanPutInCargoClothingConditions( EntityAI parent )
    {
        if ( parent.IsInherited( UndergroundStash ) )
            return super.CanPutInCargo( parent );

        if ( GetNumberOfItems() != 0 )
            return false;

        return true;
    }
    
    override bool CanReceiveItemIntoCargoClothingConditions( EntityAI item )
    {
        return !GetInventory().IsInCargo();
    }
    
    //! @note this will also be checked when splitting item
    override bool CanLoadItemIntoCargoClothingConditions( EntityAI item )
    {
        EntityAI parent = GetHierarchyParent();

        if ( !parent || parent.IsInherited( UndergroundStash ) )
            return true;

        return !GetInventory().IsInCargo();
    }
};
