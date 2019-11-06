using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Board2Script : MonoBehaviour
{
    //define
    const int Flem = 60;
    const int MapWidth = 16;
    const int MapHeight = 16;
    const int BrockNum = 4;
    const int ID = 4;
    const int initPos = 8;

    //初期化
    int NumWidth = initPos;
    int NumHight = 10;
    int Num = 0;
    int Id = 0;

    Vector3 Position;

    bool HitFlag = false;
   //生成するゲームオブジェクト
   //public GameObject BoardBlock;
   //public GameObject PlayerBlock;

    int[,] Map = new int[MapHeight, MapWidth];
    int[,] MapDrwa = new int[MapHeight, MapWidth];
    int[,] Zangai = new int[MapHeight, MapWidth];
    int[,] ZangaiSave = new int[MapHeight, MapWidth];
    int[,] Save = new int[BrockNum, BrockNum];
    int[,] Brock = new int[,]
    {
          
                    { 0,0,0,0},
                    { 0,0,0,0},
                    { 2,2,2,2},
                    { 0,2,0,0},
            
           /* {
                    { 0,0,0,0},
                    { 0,0,0,0},
                    { 2,2,2,2},
                    { 0,2,0,0},
            },
            {
                    { 0,0,0,0},
                    { 0,0,0,0},
                    { 2,2,2,2},
                    { 0,2,0,0},
            },
            {
                    { 0,0,0,0},
                    { 0,0,0,0},
                    { 2,2,2,2},
                    { 0,2,0,0},
            },*/
        };

    [SerializeField] GameObject _Bodarblock = null;
    [SerializeField] GameObject _Playerblock = null;
    //GameObject PlayerObject;
    GameObject[,] BodarObj = new GameObject[MapHeight, MapWidth];
    GameObject[,] BodarObject = new GameObject[MapHeight, MapWidth];

    //GameObject PlayerObject;
    GameObject[,] Obj = new GameObject[MapHeight, MapWidth];
    GameObject[,] PlayerObject = new GameObject[MapHeight, MapWidth];
    void Start()
    {
        for (int i = MapHeight - 1; i > 0; i--)
        {
            for (int j = 0; j < MapWidth; j++)
            {
                MapDrwa[i, j] = 1;
            }
        }

        /*for (int i = 0; i < BrockNum; i++)
        {
            for (int j = 0; j < BrockNum; j++)
            {
                MapDrwa[i , j] = Brock[ i, j];
            }
        }*/
      
        for (int i = MapHeight - 1; i > 0; i--)
        {
            for (int j = 0; j < MapWidth; j++)
            {
                Zangai[i, j] = 0;

               /* if (MapDrwa[i, j] == 0)
                {
                    BodarObject[i, j] = GameObject.Instantiate<GameObject>(_Bodarblock);
                    BodarObject[i, j].transform.localPosition = new Vector3(j, i, 0);
                    BodarObj[i, j] = BodarObject[i, j];
                }
                if (MapDrwa[i, j] == 1)
                {
                    PlayerObject[i, j] = GameObject.Instantiate<GameObject>(_Playerblock);
                    PlayerObject[i, j].transform.localPosition = new Vector3(j, i, 0);
                    Obj[i, j] = PlayerObject[i, j];
                }*/
            }
        }
        
    }

    // Update is called once per frame
    int num = 0;
    void Update()
    {
        for (int i = 0; i < MapHeight; i++)
        {
            for (int j = 0; j < MapWidth; j++)
            {
                BodarObj[i, j] = null;
                Obj[i, j] = null;
                Destroy(BodarObject[i, j]);
                 Destroy(PlayerObject[i, j]);
            }
        }
        //マップ
        for (int i = MapHeight - 1; i > 0; i--)
        {
            for (int j = 0; j < MapWidth; j++)
            {
               Map[i, j] = MapDrwa[i, j] = 0;
               ZangaiSave[i, j] = 0;    
            }
        }
         /*for (int i = 0; i < BrockNum; i++)
         {
             for (int j = 0; j < BrockNum; j++)
             {
                 Save[i, j] = 0;
             }
         }*/
        //ブロックをマップに
          for (int i = BrockNum-1; i > 0; i--)
          {
              for (int j = 0; j < BrockNum; j++)
              {
                  Map[i + NumHight, j + NumWidth] = Brock[i, j];
                  MapDrwa[i + NumHight, j + NumWidth] = Brock[i, j];
              }
          }
          for (int i = 0; i < MapHeight; i++)
          {
              for (int j = 0; j < MapWidth; j++)
              {
                  MapDrwa[i, j] += Zangai[i, j];
              }
          }
        num++;
        if (num > 20)
        {
            NumHight--;
            num = 0;
        }
        //キー
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            NumWidth--;
        }
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            NumWidth++;
        }
        //判定
        for (int i = 0; i < MapHeight; i++)
         {
             for (int j = 0; j < MapWidth; j++)
             {
                 if (Zangai[i , j] >= 1 && Map[i+1, j] >= 1)
                 {
                     HitFlag = true;
                 }
             }
         }
         if (HitFlag)
         {
             NumWidth = initPos;
             NumHight = 10;
             for (int i = 0; i < MapHeight; i++)
             {
                 for (int j = 0; j < MapWidth; j++)
                 {
                     Zangai[i, j] += Map[i, j];
                 }
             }
            // Id = Random.Range(0, ID);
             HitFlag = false;
         }
         //一番下にブロックがいたら

         for(int k =0;k<MapWidth;k++)
        {
            if (Map[1, k] > 1)
            {
                NumWidth = initPos;
                NumHight = 10;
                for (int i = 0; i < MapHeight; i++)
                {
                    for (int j = 0; j < MapWidth; j++)
                    {
                        Zangai[i, j] += Map[i, j];
                    }
                }
            }
             //Id = Random.Range(0, ID);
         }

        //列揃ったら
        int kazu = 0;
        int ColumnEraseNumEraseNum = 0;
        bool DeleteFlag = false;

        int SaveNum = 0;
        for (int i = MapHeight-1; i > 0 ; i--)
        {
            for (int j = 0; j < MapWidth; j++)
            {
                if (Zangai[i,j] >= 1)
                {
                    kazu++;
                }
                if (kazu > MapWidth - 1)
                {
                    for (int k = 0; k < MapWidth; k++)
                    {
                        Zangai[i,k] = 0;
                        kazu = 0;
                        SaveNum = i;
                        DeleteFlag = true;
                    }
                    ColumnEraseNumEraseNum++;
                }
            }
            kazu = 0;
        }
       // Debug.Log(SaveNum);
       // Debug.Log(ColumnEraseNumEraseNum);
        //一段下げる
        if (DeleteFlag)
        {
            for (int i = SaveNum; i < MapHeight-1; i++)
            {
                for (int j = 0; j < MapWidth; j++)
                {
                    if(i+ColumnEraseNumEraseNum < MapHeight)
                        ZangaiSave[i,j] = Zangai[i + ColumnEraseNumEraseNum, j];

                    
                }
            }
            for (int i = SaveNum - 1; i > 0; i--)
            {
                for (int j = 0; j < MapWidth; j++)
                {
                        ZangaiSave[i, j] = Zangai[i,j];


                }
            }
            for (int i = 0; i < MapHeight; i++)
            {
                for (int j = 0; j < MapWidth; j++)
                {
                    Zangai[i,j] = ZangaiSave[i,j];

                }
            }
            DeleteFlag = false;
        }
        //描画
        for (int i = MapHeight - 1; i > 0; i--)
        {
            for (int j = 0; j < MapWidth; j++)
            {
                if (MapDrwa[i, j] == 0)
                {
                    BodarObject[i, j] = GameObject.Instantiate<GameObject>(_Bodarblock);
                    BodarObject[i, j].transform.localPosition = new Vector3(j, i, 0);
                    BodarObj[i, j] = BodarObject[i, j];
                }
                if (MapDrwa[i, j] >= 1)
                {
                   PlayerObject[i, j] = GameObject.Instantiate<GameObject>(_Playerblock);
                    PlayerObject[i, j].transform.localPosition = new Vector3(j, i, 0);
                    Obj[i, j] = PlayerObject[i, j];
                }
            }
        }

        
    }


}

//Instantiate( 生成するオブジェクト,  場所, 回転 );  回転はそのままなら↓

 
