using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoardScript : MonoBehaviour
{
    const int Board_Size_X = 20;
    const int Board_Size_Y = 32;

    const int Player_Num = 4;
    const int Player_Size_X = 4;
    const int Player_Size_Y = 4;

    //なんのオブジェクトを使うかの設定
    [SerializeField] GameObject _blockPrefad = null;
    [SerializeField] GameObject _Playerblock = null;

    GameObject[,] _BoardBlock = new GameObject[Board_Size_Y, Board_Size_X];
    GameObject _PlayerBlock = null;
    int[,] _BoardNum = new int[Board_Size_Y, Board_Size_X];

    // Start is called before the first frame update
    void Start()
    {
        //枠生成
        for (int i = 0; i < Board_Size_Y; i++)
        {
            for (int j = 0; j < Board_Size_X; j++)
            {
                _BoardNum[i, j] = 0;

                if (i == 0 || i == Board_Size_Y - 1)
                {
                    _BoardNum[i, j] = 1;
                }
                else
                {
                    if (j == 0 || j == Board_Size_X - 1)
                    {
                        _BoardNum[i, j] = 1;
                    }
                }
            }
        }
       


        for (int i = 0; i < Board_Size_Y; i++)
        {
            for (int j = 0; j < Board_Size_X; j++)
            {
               
                if (_BoardNum[i, j] == 1)
                {
                    GameObject Object = GameObject.Instantiate<GameObject>(_blockPrefad);
                    Object.transform.localPosition = new Vector3(j, i, 0);
                    _BoardBlock[i, j] = Object;
                }
                /*if (_BoardNum[i, j] == 2)
                {
                    c
                    PlayerObject.transform.localPosition = new Vector3(j, i, 0);
                    _BoardBlock[i, j] = PlayerObject;
                }*/
            }
        }
       

    }

    bool PBlockGenerationFlag = false;
    // Update is called once per frame
    void Update()
    {
        //ブロック出現
       
            GameObject PlayerObject = GameObject.Instantiate<GameObject>(_Playerblock);
            PlayerObject.transform.localPosition = new Vector3(10, 28, 0);
            _PlayerBlock = PlayerObject;
            PBlockGenerationFlag = true;
        
    }       
}

/*int Count = 0;
bool Flag = false;
        //落ちる
        if (Flag == false)
        {
            if (Count == 100)
            {
                Count = 0;
                transform.Translate(0, -1, 0);
            }
            Count++;
        }
    }
    //地面に付いたら止まる
    void OnCollisionEnter(Collision collision)
{
    Flag = true;
    Debug.Log("Hit");
}*/
