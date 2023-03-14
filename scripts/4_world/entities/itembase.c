modded class ItemBase
{
    override bool CanPutAsAttachment( EntityAI parent )
    {
        PlayerBase player = PlayerBase.Cast( parent.GetHierarchyRootPlayer() );

        if ( player && !player.IsPlayerLoaded() )
        {
            return true;
        }

        return super.CanPutAsAttachment( parent );
    }

    override bool CanReceiveAttachment( EntityAI attachment, int slotId )
    {
        return true;
    }
};