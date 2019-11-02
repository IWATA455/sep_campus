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
    const int initPos = 4;

    //初期化
    int NumWidth = initPos;
    int NumHight = 0;
    int Num = 0;
    int Id = 0;

    bool HitFlag = false;
    //生成するゲームオブジェクト
    public GameObject BoardBlock;
    public GameObject PlayerBlock;

    int[,] Map = new int[MapHeight, MapWidth];
    int[,] MapDrwa = new int[MapHeight, MapWidth];
    int[,] Zangai = new int[MapHeight, MapWidth];
    int[,] ZangaiSave = new int[MapHeight, MapWidth];
    int[,] Save = new int[BrockNum, BrockNum];
    int[,,] Brock;

    // Start is called before the first frame upda
   
    void Start()
    {
        Brock = new int[,,]
        {
            {
                {
                    0,0,0,0,
                    0,0,0,0,
                    0,1,0,0,
                    1,1,1,0
                },
                {
                    0,1,0,0,
                    0,1,0,0,
                    0,1,0,0,
                    0,1,0,0
                },
                {
                    0,0,0,0,
                    0,1,0,0,
                    0,1,0,0,
                    0,1,1,0
                },
                {
                    0,0,0,0,
                    0,1,0,0,
                    0,1,0,0,
                    1,1,0,0
                }
            }
        };

        for (int i = 0; i < MapHeight; i++)
        {
            for (int j = 0; j < MapWidth; j++)
            {
                Zangai[i, j] = 0;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        //マップ
        for (int i = 0; i < MapHeight; i++)
        {
            for (int j = 0; j < MapWidth; j++)
            {
                Map[i, j] = MapDrwa[i, j] = 0;
                ZangaiSave[i, j] = 0;    
            }
        }
        for (int i = 0; i < BrockNum; i++)
        {
            for (int j = 0; j < BrockNum; j++)
            {
                Save[i, j] = 0;
            }
        }
                //キー(回転)
                if (Input.GetKeyDown(KeyCode.D))
        {

            for (int i = BrockNum; i > 0; i--)
            {
                for (int j = 0; j < BrockNum; j++)
                {

                    Save[j, BrockNum - i] = Brock[Id, i - 1, j];
                }
            }
            for (int i = 0; i < BrockNum; i++)
            {
                for (int j = 0; j < BrockNum; j++)
                {
                    Brock[Id, i, j] = Save[i, j];
                }
            }
        }
        else if (Input.GetKeyDown(KeyCode.A))
        {
            for (int i = BrockNum; i > 0; i--)
            {
                for (int j = BrockNum; j > 0; j--)
                {
                    Save[BrockNum - j, i - 1] = Brock[Id, i - 1, j - 1];
                }
            }
            for (int i = 0; i < BrockNum; i++)
            {
                for (int j = 0; j < BrockNum; j++)
                {
                    Brock[Id, i, j] = Save[i, j];
                }
            }
        }

        //ブロックをマップに
        for (int i = 0; i < BrockNum; i++)
        {
            for (int j = 0; j < BrockNum; j++)
            {
                Map[i + NumHight, j + NumWidth] = Brock[Id, i, j];
                MapDrwa[i + NumHight, j + NumWidth] = Brock[Id, i, j];
            }
        }
        for (int i = 0; i < MapHeight; i++)
        {
            for (int j = 0; j < MapWidth; j++)
            {
                MapDrwa[i, j] += Zangai[i, j];
            }
        }
        NumHight++;

        //判定
        for (int i = 0; i < MapHeight; i++)
        {
            for (int j = 0; j < MapWidth; j++)
            {
                if (Zangai[i + 1, j] >= 1 && Map[i, j] >= 1)
                {
                    HitFlag = true;
                }
            }
        }
        if (HitFlag)
        {
            NumWidth = initPos;
            NumHight = 0;
            for (int i = 0; i < MapHeight; i++)
            {
                for (int j = 0; j < MapWidth; j++)
                {
                    Zangai[i, j] += Map[i, j];
                }
            }
            Id = Random.Range(0, ID);
            HitFlag = false;
        }
        //一番下にブロックがいたら

        if (NumHight + 3 >= MapHeight)
        {

            NumWidth = initPos;
            NumHight = 0;
            for (int i = 0; i < MapHeight; i++)
            {
                for (int j = 0; j < MapWidth; j++)
                {
                    Zangai[i, j] += Map[i, j];
                }
            }
            Id = Random.Range(0, ID);
        }

        //描画
        for (int i = 0; i < MapHeight; i++)
        {
            for (int j = 0; j < MapWidth; j++)
            {
                if (MapDrwa[i, j] == 0)
                {
                    Instantiate(PlayerBlock, new Vector3(j, i, 0.0f), Quaternion.identity);

                }

                if (MapDrwa[i, j] >= 1)
                {
                    Instantiate(PlayerBlock, new Vector3(j, i, 0.0f), Quaternion.identity);

                }
            }
        }
    }


}

//Instantiate( 生成するオブジェクト,  場所, 回転 );  回転はそのままなら↓

 
